#include<iostream>
using namespace std;

int main()
{
    int matSize, row, col;
    int sum=0, ro=0,co=0;
    while(cin>>matSize)
    {
        if(matSize <= 0)
            break;
            
        int matrix[matSize][matSize],rowSum[101]={0}, colSum[101]={0};

        for(row=0; row<matSize; row++)
        {
            for(col=0; col<matSize; col++)
            {
                cin>>matrix[row][col];
            }
        }

        for(row=0; row<matSize; row++)
        {
            for(col=0; col<matSize; col++)
            {
                rowSum[row] += matrix[row][col];
                colSum[row] += matrix[col][row];
            }
            if(rowSum[row]%2!=0)
            {
                ro++;
            }
            if(colSum[row]%2!=0)
            {
                co++;
            }
        }

        if(ro==0 && co==0)
        {
            cout<<"OK"<<endl;
        }
        else if(ro>1 || co>1)
        {
            cout<<"Corrupt"<<endl;
        }
        else if(ro==1 || co==1)
        {
            int cb1=1,cb2=1;

            for(int i=1; i<=4; i++)
            {
                if(rowSum[i]%2!=0)
                {
                    cb1+=i;
                }
                if(colSum[i]%2!=0)
                {
                    cb2+=i;
                }
            }
            cout<<"Change bit ("<<cb1<<","<<cb2<<")"<<endl;
        }

    }

    return 0;
}
