#include<iostream>
using namespace std;

int main()
{
    int matSize, i, j, matrix[101][101], ro, co, idx1, idx2;
    int rowSum[101][101], colSum[101][101];

    while(cin>>matSize && matSize!=0)
    {
        ro=co=0;

        for(i=0; i<matSize; i++)
        {
            rowSum[i][matSize]=0;
            colSum[matSize][i]=0;
        }


        for(i=0; i<matSize; i++)
        {
            for(j=0; j<matSize; j++)
            {
                scanf("%d", &matrix[i][j]);
                rowSum[i][matSize]+=matrix[i][j];
                colSum[matSize][j]+=matrix[i][j];
            }

        }

        for(i=0; i<matSize; i++)
        {
            if(rowSum[i][matSize]%2)
            {
                ro++;
                idx1=i;
            }
        }

        for(j=0; j<matSize; j++)
        {
            if(colSum[matSize][j]%2)
            {
                co++;
                idx2=j;
            }
        }

        if(ro==0 && co==0)
            cout<<"OK"<<endl;
        else if(ro==1 && co==1)
            cout<<"Change bit ("<<idx1+1<<","<<idx2+1<<")"<<endl;
        else
            cout<<"Corrupt"<<endl;
    }
    return 0;
}

