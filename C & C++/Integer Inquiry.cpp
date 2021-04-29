#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;

    while(cin>>s && (s[0]+s[1]) != '0')
    {
        int n = s.size(), sum = 0, cary=0;
        reverse(s.begin(),s.end());
        string s1[n] = {3,7,5,1};
        for(int i=0; i<n; i++)
        {
            //cary = ((s[i]-'0')+(s1[i]-'0'))/10;
            if(((s[i]-'0')+(s1[i]-'0'))/10 == 0 && cary == 0)
            {
                sum + = (s[i]-'0')+(s1[i]-'0');
            }
            else
            {
                int adding = ((s[i]-'0')+(s1[i]-'0'))+cary;
                sum += adding % 10;
                cary++;
            }
        }

        cout<<s<<endl;
    }

    return 0;
}
