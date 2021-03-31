#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7,SZ=10000007;
vector<int>isprime(SZ,1);
vector<ll>primes;
void sieve(ll range)
{
    isprime[0]=isprime[1]=0;
    for(ll i=2;i<=range;i++)
    {
        if(isprime[i])
        {
            for(ll j=i*i;j<=range;j+=i)
                isprime[j]=0;
            primes.push_back(i);
        }

    }
}
vector<ll> primeFactors(ll N)
{
    vector<ll>factors;
    ll pfIdx=0,pf=primes[pfIdx];
    while (pf*pf<=N)
    {
        while (N%pf==0)
        {
            N/=pf;
            factors.push_back(pf);
        }
        pf=primes[++pfIdx];
    }
    if(N>1)
        factors.push_back(N);
    return factors;
}
int main()
{
   sieve(1000007);
   vector<ll> factors = primeFactors(1000000000000);
}
