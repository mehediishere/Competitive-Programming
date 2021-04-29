#include<iostream>
using namespace std;


int main()
{
    char capitalLetters[30], smallLetters[30];
    int n, letterCount = 0;
    string s;

    int cl = 65, sl = 97;

    for(int i=0; i<26; i++)
    {
        capitalLetters[i] = cl;
        cl++;
    }

    for(int i=0; i<26; i++)
    {
        smallLetters[i] = sl;
        sl++;
    }

    cin>>n;
    char charString[n];
    cin>>charString;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<26; j++)
        {
            if((charString[i] == capitalLetters[j] || charString[i] == smallLetters[j]) &&(
                        (capitalLetters[j]>=65 && capitalLetters[j]<=90) || (smallLetters[j]>=97 && smallLetters[j]<=122)))
            {
                capitalLetters[j] = 64;
                smallLetters[j] = 64;
                letterCount++;
            }
        }
    }

    if(letterCount ==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
