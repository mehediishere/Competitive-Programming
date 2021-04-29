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
        if(s.substr(len-2,2)=="po")
            cout<<"FILIPINO\n";
        else if(s.substr(len-4,4)=="desu"||s.substr(len-4,4)=="masu")
            cout<<"JAPANESE\n";
        else
            cout<<"KOREAN\n";
    }

    return 0;
}

