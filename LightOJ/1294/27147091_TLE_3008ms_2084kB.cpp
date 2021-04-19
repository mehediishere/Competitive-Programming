#include<iostream>
using namespace std;

int main()
{
    int testCase, test=0, n, m, sum1=0,sum2= 0, siz = 0;
    cin>>testCase;

    while(testCase--)
    {
        cin>>n>>m;
        siz = n;
        if(n%(2*m)==0)
        {
            int j=1;
            for(int i=1; i<=n; i+=(m*2))
            {
                int l=i;
                while(j<=m && i<=n)
                {
                    sum1 += l;
                    l++;
                    j++;
                }
                int k = l;
                while(j>1 && i<=n)
                {
                    sum2 += k;
                    k++;
                    j--;
                }
            }

        }

        printf("Case %d: %d\n", ++test, abs(sum1-sum2));

        sum1=sum2=0;
    }

    return 0;
}
