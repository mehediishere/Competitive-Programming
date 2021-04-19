#include <iostream>
#include <string>
using namespace std;

int main()
{
    string l, r, s1[21], s2[21];
    int n, m, t, cnt;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> s1[i];
    for (int i = 0; i < m; i++)
        cin >> s2[i];
    cin >> t;
    while (t--)
    {
        cin >> cnt;
        int i = cnt%10;
        l = (i == 0) ? s1[n] : s1[i];
        r = (cnt%m == 0) ? s2[m-1] : s2[cnt % m - 1];
        cout << l + r << endl;
    }
}
