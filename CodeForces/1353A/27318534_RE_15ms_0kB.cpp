#include <vector>
#include<iostream>
using namespace std;

int main()
{

    int t;

    cin>>t;

    while(t--)
    {
        int n, m, a, b, c=0, sum = 0;
        cin>>n>>m;
        vector<int> vec;
        if(n<2)
            cout<<m<<endl;
        else
        {
            a = n/2;
            b = n-a;
            // fill the array with 12 seven times
            vec.assign(n, 0);
            vec[0] = a;
            vec[1] = b;
            for(int i=0; i<n; i++)
            {
                sum += abs(vec[i]-vec[i+1]);
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
