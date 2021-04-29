#include<iostream>
using namespace std;

int main()
{

    long n, x, vertical=0, standard=0;
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
            vertical += a[i];
        else
            standard += a[i];
    }
    //cout<<vertical<<" "<<standard<<endl;
    cout<<vertical*vertical+standard*standard<<endl;

    return 0;
}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//    long long n, x, vertical=0, standard=0;
//    cin>>n;
//    for(int i=0; i<n; i++)
//    {
//        cin>>x;
//        if (i < n/2)
//            vertical += x;
//        else
//            standard += x;
//    }
//    cout<<vertical*vertical+standard*standard<<endl;
//
//    return 0;
//}

