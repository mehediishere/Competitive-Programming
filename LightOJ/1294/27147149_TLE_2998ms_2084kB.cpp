#include<iostream>
using namespace std;

int main()
{
    int testCase, test=0, n, m, sum1=0, sum2= 0;
    cin>>testCase;

    while(testCase--)
    {
        cin>>n>>m;
        if(n%(2*m)==0)
        {
            int j=1;
            for(int i=1; i<=n; i+=(m*2))
            {
                int l=i;
                jump:
                if(j<=m && i<=n)
                {
                    sum1 += l;
                    l++;
                    j++;
                    goto jump;
                }
                int k = l;
                jump2:
                if(j>1 && i<=n)
                {
                    sum2 += k;
                    k++;
                    j--;
                    goto jump2;
                }
            }

        }

        printf("Case %d: %d\n", ++test, abs(sum1-sum2));

        sum1=sum2=0;
    }

    return 0;
}

