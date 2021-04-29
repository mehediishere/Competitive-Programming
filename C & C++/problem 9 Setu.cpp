#include<iostream>
using namespace std;

int main()
{

    int testCase, n, sum = 0, tkamount;
    string str;

    cin >> testCase;
    for(int t = 1; t <= testCase; t++)
    {
        cin >> n;
        cout <<"Case "<< t <<":"<<endl;
        for(int i = 0; i < n; i++)
        {
            cin >> str;
            if(str == "report")
            {
                cout << sum << "\n";
                continue;
            }

            cin >> tkamount;
            if(str == "donate")
                sum+=tkamount;
        }
        sum = 0;
    }
    return 0;
}
