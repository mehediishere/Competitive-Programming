#include<iostream>
using namespace std;

int main()
{
    int bananaPrice, ownMoney, bananasWant,  price,sum=0;

    cin>>bananaPrice>>ownMoney>>bananasWant;

    for(int i =1;  i<=bananasWant; i++)
    {
        sum +=  i;
    }

    sum = sum*bananaPrice;

    if(ownMoney>sum)
    {
        cout<<0<<endl;
    }
    else
    {
        price = abs(sum-ownMoney);
        cout<<price<<endl;
    }

    return 0;
}
