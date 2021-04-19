#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, c=0;
    static int mat[1005][1005], arr[1005];
    cin>>n;
    if(n>=1 && n<=1000)
    {
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

        for(int i=0; i<c-1; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<arr[c-1]<<endl;
    }

    return 0;
}
