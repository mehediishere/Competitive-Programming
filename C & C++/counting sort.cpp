//5 2 1 7 5 0 5 5 1 0
#include<iostream>
using namespace std;
int k=0;

void Counting_Sort(int A[],int B[],int n)
{
    int C[k];
    for(int i=0; i<=k+1; i++)
    {
        C[i]=0;
    }
    for(int j=1; j<=n; j++)
    {
        C[A[j]]++;
    }

    for(int j=0; j<10; j++)
    {
        cout<<endl<<j<<" : "<<C[j]<<endl;
    }

    for(int i=1; i<=k; i++)
    {
        C[i]+=C[i-1];
    }
    for(int j=n; j>=1; j--)
    {
        B[C[A[j]]]=A[j];
        C[A[j]]=C[A[j]]-1;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;

    int A[n],B[n],v,temp;
    int i=1;
    while( i<=n)
    {
        cin>>v;
        temp = 0;
        if(v>9)
        {
            temp = v;
            while(temp>0)
            {
                int digit = temp%10;
                temp /= 10;
                if(A[i]>k)
                {
                    k=A[i];
                }
                i++;
            }
        }
        else
        {
            A[i] = v;
            if(A[i]>k)
            {
                k=A[i];
            }
            i++;
        }
    }
    Counting_Sort(A,B,i);
    for(int i=1; i<=n; i++)
    {
        cout<<B[i]<<" ";
    }

    cout<<endl;
    return 0;
}
