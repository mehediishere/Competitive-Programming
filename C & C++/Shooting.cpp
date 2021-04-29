#include<iostream>
#include<algorithm>
using namespace std;

struct can
{
    int dur;
    int pos;
};

int n;
can ar[1005];

bool compare(can a, can b)
{
    if(a.dur>b.dur) return true;
    return false;
}

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i].dur;
        ar[i].pos = i+1;
    }
    sort(ar,ar+n,compare);

    int totalShots = 0;
    for(int i=0; i<n; i++)
    {
        totalShots += ar[i].dur*i+1;
    }
    cout<<totalShots<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<ar[i].pos<<" ";
    }

    return 0;
}
