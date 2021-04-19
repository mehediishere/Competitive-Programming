/*
    n=6, m=9
  0 1 2 3 4 5 6 7 8
0 R D D D D D R R R
1 R R D D R R D D D
2 R R D R D R R D R
3 D D D D R D D R R
4 D R R D R D D D R
5 D D R D R R D D C
*/
#include<iostream>
using namespace std;

int main()
{
    int t,n,m,c=0;
    char arr[100][100];
    cin>>t;
    if(t>=1 && t<=10)
    {
        while(t)
        {
            cin>>n>>m;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    cin>>arr[i][j];
                }
            }

            for(int i=0; i<1; i++)
            {
                for(int j=0; j<m-1; j++)
                {
                    if(arr[i][j]=='D')
                    {
                        c++;
                    }
                }
            }

            if(arr[0][m-1]=='R')
            {
                c++;
            }

            for(int j=m-1; j<m; j++)
            {
                for(int i=1; i<n-1; i++)
                {
                    if(arr[i][j]=='R')
                    {
                        c++;
                    }
                }
            }
            cout<<c<<endl;
            c=0;
            t--;
        }
    }

    return 0;
}
