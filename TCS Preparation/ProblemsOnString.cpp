#include<iostream>
#include<string>
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

void removeSpaces(string str)
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
        }
    }
    cout<<str;
}   

int main()
{
    string str = "veda    nt yeo tikar";
    // getline(cin , str);
    removeSpaces(str);
    return 0 ;
}