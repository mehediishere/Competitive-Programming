#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1], b[n+1], hval=0, hvalindx=0, sum=0, j=0, p=1;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(hval<=a[i])
        {
            hval = a[i];
            hvalindx = i;
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(i != hvalindx)
        {
            ++j;
            b[j] = a[i];
        }
    }

    int k = sizeof(b)/sizeof(b[1]);
    sort(b, b+k);
    for(int i=j; i>=1; i--)
    {
        sum += b[i]*p+1;
        p++;
    }
    cout<<sum+1<<endl;
    for(int i=j; i>=1; i--)
        cout<<i<<" ";

    return 0;
}
