#include<iostream>
using namespace std;
typedef long long int lli;
lli a[100], b[100];
void selectionSort(lli a[], lli n, lli b[]) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min] && b[min] == 0)
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }

        selectionSort(a, n, b);

        for(int i=0;i<n;++i)
            cout<<a[i]<<" ";
        cout<<endl;
    }

    return 0;
}
