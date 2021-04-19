#include<iostream>
using namespace std;

int main()
{

    long long n, x, vertical=0, standard=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if (i < n/2)
            vertical += x;
        else
            standard += x;
    }
    cout<<vertical*vertical+standard*standard<<endl;

    return 0;
}

