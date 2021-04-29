#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int l,t,n,q,s[100005],a,b;
    vector<int>v;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        v.push_back(n);
    }

        for(int i=1;i<=t;i++)
        {
            cout<<v[i]<<endl;
        }

    s[0]=0;
    for(int i=1;i<=t;i++)
    {
        s[i]=s[i-1]+v[i-1];
        cout<<s[i]<<endl;
    }
    cin>>q;
    for(int j=1;j<=q;j++)
    {
        cin>>a>>b;
        a++;
        b++;
        cout<<s[b]-s[a-1]<<endl;

    }
    return 0;

}
