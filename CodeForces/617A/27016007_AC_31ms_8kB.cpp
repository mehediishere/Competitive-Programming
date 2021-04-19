#include<iostream>
using namespace std;

int main()
{
    int x, dist=0, count = 1;
    cin >>x;

    if(x<=5)
        cout<<"1"<<endl;
    else
    {
        while(x>dist)
        {
            dist = 5*count;
            count++;
        }
        cout<<count-1<<endl;
    }

    return 0;
}
