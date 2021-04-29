#include<iostream>
using namespace std;

int main()
{
    int n,arr[105][105],dir = 0, top=0, bottom=0,left=0,right=0;
    cin>>n;
    bottom=n-1;
    right=n-1;

    for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}

    while(top<=bottom && left<=right)
    {
        if(dir == 0)
        {
            for(int k = left; k<=right; k++)
                cout<<arr[top][k]<<" ";
            top++;
        }
        else if(dir == 1)
        {
            for(int k = top; k<=bottom; k++)
                cout<<arr[k][right]<<" ";
            right--;
        }
        else if(dir == 2)
        {
            for(int k = right; k>=left; k--)
                cout<<arr[bottom][k]<<" ";
            bottom--;
        }
        else if(dir == 3)
        {
            for(int k = bottom; k>=top; k--)
                cout<<arr[k][left]<<" ";
            left++;
        }
        dir = (dir+1)%n;
    }
}
