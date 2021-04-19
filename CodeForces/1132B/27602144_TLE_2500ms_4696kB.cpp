#include<iostream>
#include<algorithm>
using namespace std;

long long a[300005],b[300005];

int main()
{

//7
//7 1 3 1 4 10 8
//2
//3 4
    long long n, m, sum=0,sum2=0, c;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>c;
        sort(a, a+n);
        int j=n-1;
        c=c-1;
        while(c--)
        {
            sum+=a[j];
            j--;
        }
        while(j--)
        {
            sum2 +=a[j];
        }
        cout<<sum+sum2<<endl;
        sum = 0, sum2 = 0;
    }

    return 0;
}

