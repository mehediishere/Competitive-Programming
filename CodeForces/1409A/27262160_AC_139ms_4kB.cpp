#include<iostream>
using namespace std;
typedef  long long ll;

void i_am_frastrated()
{
    ll a_kill_b,b_take_hit_from_a;
    cin>>a_kill_b>>b_take_hit_from_a;
    ll long_hit_c = abs(a_kill_b-b_take_hit_from_a);
    ll d_break_c=long_hit_c/10;
    ll e_check_whether_c_alive = long_hit_c%10;
    if(e_check_whether_c_alive)
        d_break_c++; //Agggggggggggainnnnnnnnnn......!!!!
    cout<<d_break_c<<"\n";
}

int main()
{
    int t=1;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        i_am_frastrated();
    }

    return 0;
}

