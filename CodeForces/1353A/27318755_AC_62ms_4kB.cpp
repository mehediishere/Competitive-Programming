#include <vector>
#include<iostream>
using namespace std;

int main()
{

    int t;

    cin>>t;

    while(t--)
    {
        long long n, m, a, b, c=0;
        long long sum = 0;
        cin>>n>>m;
        vector<int> vec;
        if(n<2)
            cout<<0<<endl;
        else if (n == 2)
            cout<<m<<endl;
        else
            cout<<2*m<<endl;
    }

    return 0;
}
