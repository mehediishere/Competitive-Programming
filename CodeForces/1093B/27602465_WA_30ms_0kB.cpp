#include<iostream>
using namespace std;

int main()
{

    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int len = s.size(), flag = 0;
        for(int i=1; i<len; i++)
        {
            if(s[0] == s[i])
                continue;
            else
            {
                flag = 1;
                cout<<s<<endl;
                break;
            }
        }
        if(flag == 0)
            cout<<-1<<endl;

    }

    return 0;
}

