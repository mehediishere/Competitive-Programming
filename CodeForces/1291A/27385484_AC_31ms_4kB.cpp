#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
	int  t;
	cin >>t;
	while(t--)
	{
		int n;
		cin >>n;
		string s;
		cin >>s;
		int cnt=0;
		string ss;
		for(int i=0;i<n;i++)
		{
			if((s[i]-'0')%2==1)
            {
                ss+=s[i];
                cnt++;
            }
			if(cnt==2)
                break;
		}
		if(cnt==2)
            cout<<ss<<endl;
		else
            cout<<-1<<endl;
	}
}
