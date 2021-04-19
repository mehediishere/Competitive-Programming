#include<bits/stdc++.h>
using namespace std;

string s;

int main()
{
	int t;
	cin>>t;
	while(t)
	{
		cin>>s;
		int sum=0;
		int x=0,y=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1') 
			{
				x=i;
				break;
			}
		}
		for(int j=s.length()-1;j>=0;j--)
		{
			if(s[j]=='1')
			{
				y=j;
				break;
			}
		}
		if(x==0||y==0)
		    cout<<0<<endl;
		else 
		{
			for(int i=x;i<=y;i++)
			{
				if(s[i]=='0') sum++;
			}
			cout<<sum<<endl;
		}
		t--;
	}
	return 0;
}
