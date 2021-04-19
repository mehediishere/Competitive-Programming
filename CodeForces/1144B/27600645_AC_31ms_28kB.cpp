#include<iostream>
#include<algorithm>
using namespace std;

int a[2005],b[2005];

int main()
{
	int n,i=0,j=0,k;
	cin>>n;
	while(n--)
	{
		int t;
		cin>>t;
		if(t%2==1)
			a[i++]=t;
		else
			b[j++]=t;
	}
	sort(a,a+i);
	sort(b,b+j);
//	for(k=0;k<i;k++)
//		cout<<a[k]<<" ";
//	cout<<endl;
//	for(k=0;k<j;k++)
//		cout<<b[k]<<" ";
	int s=0;
	if(i>j)
	{
		i--;
		for(k=0;k<i-j;k++)
			s+=a[k];
	}
	else if(j>i)
	{
		j--;
		for(k=0;k<j-i;k++)
			s+=b[k];
	}
	else
		s=0;
	cout<<s<<endl;
	return 0;
}
