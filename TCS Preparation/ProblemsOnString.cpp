#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
 
void reverseAString(string &str)  // Pass by reference 
{
    int len=str.size();
    for(int i=0;i<len/2;i++)
    {
        swap(str[i],str[len-i-1]);
    }
}

bool checkForPalindrome(string &str)
{
    string temp = str;
    reverseAString(str);
    return temp == str ;
}

int countVowel(string str)
{
    int i=0;
    int cnt = 0 ;
    while(str[i]!='\0')
    {
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cnt += 1;
        }
        i++;
    }
    return cnt ;
}  

void removeSpaces(string str) // Brute-Force Approach with O(n2) time complexity 
{
    int len = str.size();
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            for(int j=i ; j<len-1 ; j++)
            {
                str[j] = str[j+1];
            }
            i--;
            len--;
        }
    }
    str.resize(len); 
    cout<<str;
}   

void removeSpaces2(string &str) // Optimized code O(n) time complexity 
{
    int x=0 ; 
    int len = str.size();
    for(int i=0;i<len;i++)
    {
        if(str[i]!=' ')
        {
            str[x]=str[i];
            x++;
        }
    }
    str.resize(x);
}

void characterFrequency(string str)
{
    int len = str.size();
    int cnt;
    for(int i=0;i<len;i++)
    {
        bool check=false;
        if(str[i] == ' ') 
        {
            continue;
        }
        for(int j=i-1;j>=0;j--)
        {
            if(str[i]==str[j])
            {
                check=true;
                break;
            }
        }
        if(check==false)
        {
            cnt=0;
            for(int k=0;k<len;k++)
            {
                if(str[i]==str[k])
                {
                    cnt++;
                }
            }
            cout<<str[i]<<" occurs "<<cnt<<" times\n";
        }  
    }
}

void characterFrequency2(string str)
{
    unordered_map<char , int> freq;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==' ')
        {
            continue;
        }
        freq[str[i]]++ ;
    }
    for(auto &pair : freq)
    {
        cout<<pair.first<<" occurs "<<pair.second<<" times .\n";
    }

}

int main()
{
    string str = "vedantvnnn";
    // getline(cin , str);
    characterFrequency2(str);
    return 0 ;
}