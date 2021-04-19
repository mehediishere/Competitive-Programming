#include <iostream>
using namespace std;

int main()
{
    int n, t, test = 1, check = 0, arr[101][101];
    char Nn, eq;
    cin>>t;

    while(t--)
    {
        cin>>Nn>>eq>>n;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin>>arr[i][j];
               if(arr[i][j] < 0)  
                        check = 1;
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n-i; j++)
            {
                if(arr[i][j] != arr[n-1-i][n-1-j])
                {
                    check = 1;
                    break;
                }
            }
        }

        cout<<"Test #"<<test<<": ";
        test++;

        if(check == 0)
            cout<<"Symmetric.";
        else
            cout<<"Non-symmetric.";
        cout<<endl;

    }

    return 0;
}