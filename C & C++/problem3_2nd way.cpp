#include<iostream>
using namespace std;

int main()
{
        int row, col, matSize, matrix[100][100], check = 0;

        cin>>matSize;

        for(row=0; row<matSize; row++)
        {
            for(col=0; col<matSize; col++)
            {
                cin>>matrix[row][col];
            }
        }

        for(row=0; row<matSize; row++)
        {
            for(col=0; col<matSize-1; col++)
            {
                if(matrix[row][col] != matrix[matSize-1-row][matSize-1-col])
                {
                    check = 1;
                }
            }
        }
        if(check = 0)
        {
            cout<<"Symmetric."<<endl;
        }
        else
        {
            cout<<"Not Symmetric."<<endl;
        }
}
