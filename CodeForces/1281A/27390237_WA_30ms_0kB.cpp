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
            cout<<"Filipino"<<endl;
            break;
        case 'u':
            cout<<"Japanese"<<endl;
            break;
        case 'k':
            cout<<"Korean"<<endl;
            break;
        default:
            break;
        }
    }

    return 0;
}

