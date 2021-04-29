#include<iostream>
using namespace std;
int main() {
	int n, t, check=0;
	cin >> t;
	while (t--) {
		cin >> n;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '8' && s.size() - i >= 11) {
				check = 1;
				break;
			}
		}
		if (check == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		check=0;
	}
}
