
// Hoynai

#include<iostream>
using namespace std;

int main()
{
    int chessboard[25][25] = {{1,4,5,16,17},
                              {2,3,6,15,18},
                              {9,8,7,14,19},
                              {10,11,12,13,20},
                              {25,24,23,22,21}};

    int testCase, n, caseNum=0, i, j;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d", &n);
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(chessboard[i][j] == n)
                    goto printthem;
            }
        }
        printthem:
        printf("Case %d: %d %d\n",++caseNum, j+1, i+1);
    }

    return 0;
}

