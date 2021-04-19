#include<iostream>
#include<algorithm>
using namespace std;

long long a[300005],b[300005];

int main()
{
    long long n, m, sum=0,sum2=0, c;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    cin>>m;
    sum2 = sum;
    sort(a, a+n);
    for(int i=0; i<m; i++)
    {
        cin>>c;
        long long j=n-c, k=1;
        while(j--)
        {
            if(k == c-1)
            {
                sum -= a[j];
                break;
            }
            else
                k++;
        }
        cout<<sum<<endl;
        sum = sum2, k=0;
    }

    return 0;
}
