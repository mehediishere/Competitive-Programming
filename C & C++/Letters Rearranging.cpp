#include<iostream>
using namespace std;

int checkPalin(string s)
{
    int l = 0, flag = 0;
        int h = s.size();

        while (h > l)
        {
            if (s[l++] != s[h--])
            {
                flag = 1; //Not palindrom
            }
        }
    return flag;
}

int main()
{

    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cout<<checkPalin(s);
    }

    return 0;
}

