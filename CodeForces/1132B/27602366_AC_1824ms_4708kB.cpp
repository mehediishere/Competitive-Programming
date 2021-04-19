#include<iostream>
#include<algorithm>
using namespace std;

long long int a[300005],b[300005];

int main()
{
    long long int n, m, sum=0,sum2=0, c;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    cin>>m;
    sum2 = sum;
    sort(a, a+n);
    while(m--)
    {
        cin>>c;
        sum -= a[n-c];
        cout<<sum<<endl;
        sum = sum2;
    }

    return 0;
}

