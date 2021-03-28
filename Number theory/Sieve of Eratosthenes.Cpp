#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7,SZ=10000007;
vector<int>isprime(SZ,1);
vector<int>primes;
ll n;
void Sieve()
{
    isprime[0]=isprime[1]=0;
    n = n + 1;
    for(ll i=2; i<=n ;i++)
    {
        if(isprime[i])
        {
            for(ll j=i*i;j<=n;j+=i)
                isprime[j]=0;
            primes.push_back(i);
        }
    }
}
bool isPrime(ll N)  // only work for N <= (last prime in "primes")^2
{
    if(N<=n)
        return isprime[N];
    for(int i=0;i<primes.size();i++)
    {
        if(N%primes[i]==0)
            return false;
    }
    return true;
}
int main()
{
    n = 10000000;
    Sieve();
    if(isPrime(136117223861LL)) // test if 136117223861 is prime or not
        cout<<136117223861LL<<" is Prime number."<<endl;
    else
        cout<<136117223861LL<<" is NOT Prime number."<<endl;
}

