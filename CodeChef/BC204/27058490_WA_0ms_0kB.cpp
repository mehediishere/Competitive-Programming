#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    static int mat[1000][1000], arr[1000], c=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>mat[i][j];
            arr[c]=mat[i][j];
            c++;
        }
    }

    sort(arr,arr+c);

    for(int i=0; i<c; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
