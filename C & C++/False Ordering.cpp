#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=i/2;j++)
            if(i%j==0)
                ar[i].c++;
        ar[i].c++;
        ar[i].ind = i;
        cout<<ar[i]<<endl;
    }

    return 0;
}
