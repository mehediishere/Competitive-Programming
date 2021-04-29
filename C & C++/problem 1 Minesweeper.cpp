#include<iostream>
using namespace std;

int main()
{
    int n,m,f=1;
    char arr[100][100];
    while(cin>>n>>m && n && m)
    {
        //arr[n*m+1];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]=='.')
                    arr[i][j] = 49;
            }
        }
        cout<<"Field #"<<f<<":"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
        f++;

    }

    return 0;
}
