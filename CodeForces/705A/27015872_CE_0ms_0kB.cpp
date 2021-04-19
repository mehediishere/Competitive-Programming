#include<iostream>
using namespace std;

int main()
{
    string s1 = "I hate";
    string s2 = "I love";
    int n;
    cin>>n;
    if(1<=n && n<=100)
    {
        for(int i=1; i<=n; i++)
        {
            if(i%2 !=0 && i == 1)
            {
                cout<<s1;
            }
            else if(i%2 !=0 && i !=1)
            {
                cout<<" that "<<s1;
            }
            else
            {
                cout<<" that "<<s2;
            }
        }
        cout<<" "<<"it";
    }

    return 0;
}
