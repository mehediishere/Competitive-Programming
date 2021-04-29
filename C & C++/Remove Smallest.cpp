#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, a[105];
		string s = "YES";
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=1;i<n;i++){
			if(!(a[i-1]+1>=a[i])){
				s = "NO";
				break;
			}
		}
        cout<<s<<endl;

	}
}
