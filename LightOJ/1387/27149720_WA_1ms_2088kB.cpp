#include<iostream>
using namespace std;

int main()
{
    int testCase, n, sum = 0, money;
    string str;

    cin >> testCase;
    while(testCase--)
    {
        cin >> n;
        cout << "Case " << testCase << ":\n";
        for(int i = 0; i < n; i++)
        {
            cin >> str;
            cin >> money;
            if(str == "donate")
                sum+=money;
            cin >> str;
            if(str == "report")
            {
               cout <<sum<<endl;
            }
            sum = 0;
        }
    }
    return 0;
}
