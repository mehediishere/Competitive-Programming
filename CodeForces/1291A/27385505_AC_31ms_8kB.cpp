#include <iostream>
using namespace std;
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
		int coun=0;
		string ss;
		for(int i=0;i<n;i++)
		{
			if((s[i]-'0')%2==1)
            {
                ss+=s[i];
                coun++;
            }
			if(coun==2)
                break;
		}
		if(coun==2)
            cout<<ss<<endl;
		else
            cout<<-1<<endl;
	}
}
