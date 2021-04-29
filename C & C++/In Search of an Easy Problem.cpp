#include<iostream>
using namespace std;

int main()
{
    int peoples, vote, count=0;

    cin>>peoples;

    for(int i=0;  i<peoples; i++)
    {
        cin>>vote;
        if(vote == 0)
        {
            count = 0;
        }
        else
        {
            count = 1;
            cout<<"HARD"<<endl;
            break;
        }
    }
    if(count == 0)
    {
        cout<<"EASY"<<endl;
    }

    return 0;
}
