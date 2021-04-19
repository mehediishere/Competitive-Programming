#include<bits/stdc++.h>
using namespace std;
long long int n;
int deleteElement(long long int arr[], long long int n)
{
    int i;
    for (i=0; i<n;)
    {
        if (arr[i] == arr[i+1])
        {
            i++;
        }
        else
        {
            arr[i] = arr[i]+arr[i+1];
            break;
        }
    }
    i=i+1;
    if (i < n)
    {
        n = n - 1;
        for (int j=i; j<n; j++)
            arr[j] = arr[j+1];
    }

    return n;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        if(n<3)
        goto level2;
        else
        goto level3;
    level1:
        n = deleteElement(arr, n);

        for (int i=0; i<n; i++)
            arr[i] = arr[i];
        //cout<<endl;
        level3:
        if(n>1)
            for (int i=0; i<n-1; i++)
            {
                if(arr[i] != arr[i+1])
                    goto level1;
            }
        level2:
        //cout<<endl;
        cout<<n<<endl;
    }


    return 0;
}
