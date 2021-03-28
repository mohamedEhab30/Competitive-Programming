#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
ll gcd(ll a,ll b)
{
    return (!b)?a:gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return a*(b/gcd(a,b));
}
int main()
{
    ll x=350,y=150;
    ll _gcd = gcd(x,y),_lcm = lcm(x,y);
    cout<<"gcd of "<<x<<" and "<<y<<" equals "<<_gcd<<endl;
    cout<<"lcm of "<<x<<" and "<<y<<" equals "<<_lcm<<endl;
    cout<<x<<"/"<<y<<" is equal to "<<x/_gcd<<"/"<<y/_gcd<<endl;

}


