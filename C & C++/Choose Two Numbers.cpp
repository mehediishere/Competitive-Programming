#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    int n,m;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n);
    cin>>m;
    int b[m+1];
    for(int i=0; i<m; i++)
        cin>>b[i];
    sort(b, b+m);

    cout<<a[n-1]<<" "<<b[m-1]<<endl;

    return 0;
}

