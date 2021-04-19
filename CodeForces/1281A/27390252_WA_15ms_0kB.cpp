#include<iostream>
#include<cstring>
using namespace std;

int main()
{

    int t, len=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        len = s.size();
        switch(s[len-1])
        {
        case 'o':
            cout<<"FILIPINO"<<endl;
            break;
        case 'u':
            cout<<"JAPANESE"<<endl;
            break;
        case 'k':
            cout<<"KOREAN"<<endl;
            break;
        default:
            break;
        }
    }

    return 0;
}

