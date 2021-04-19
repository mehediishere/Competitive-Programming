#include<iostream>
using namespace std;

int main()
{

    int n, x, vertical, standard;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
            vertical += a[i];
        else
            standard += a[i];
    }
    //cout<<vertical<<" "<<standard<<endl;
    cout<<vertical*vertical+standard*standard<<endl;

    return 0;
}

