#include<iostream>
using namespace std;

int a, b, c, d, e, f;
int fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    cout<<fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)<< " : ";
    return( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        int sum = 0;
        for (int i = 0; i<=n; i++)
        {
            sum += (n-1)+(n-2)+(n-3)+(n-4)+(n-5)+(n-6);
        }
        printf("Case %d: %d\n", ++caseno, sum % 10000007);
    }
    return 0;
}
