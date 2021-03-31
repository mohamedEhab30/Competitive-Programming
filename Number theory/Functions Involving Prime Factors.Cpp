#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7,SZ=10000007;
vector<int>isprime(SZ,1);
vector<ll>primes;
//Functions Involving Prime Factors
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
int numPF(ll N)
{
    vector<ll> factors = primeFactors(N);
    return factors.size();
}
int numDiffPF(ll N)
{
    vector<ll> factors = primeFactors(N);
    sort(factors.begin(),factors.end());
    int ans=1;
    for(int i=1;i<factors.size();i++)
    {
        if(factors[i]!=factors[i-1])
            ans++;
    }
    return ans;
}
ll sumPF(ll N)
{
    vector<ll> factors = primeFactors(N);
    ll ans=0;
    for(int i=0;i<factors.size();i++)
    {
            ans+=factors[i];
    }
    return ans;
}
ll numDiv(ll N)
{
    ll pfIdx=0,pf=primes[pfIdx],powers=0,ans=1;
    while (pf*pf<=N)
    {
        while (N%pf==0)
            N/=pf,powers++;
        ans*=(powers+1);
        pf=primes[++pfIdx];
    }
    if(N>1)
        ans*=2;
    return ans;
}
ll sumDiv(ll N) {
    ll pfIdx=0,pf=primes[pfIdx],ans=1,pro=1;
    while (pf*pf<=N)
    {
        pro=1;
        while (N%pf==0)
        {
            pro*=pf;
            N/=pf;
        }
        pro*=pf;
        ans*=((pro-1)/(pf-1));
        pf=primes[++pfIdx];
    }
    if(N>1)
        ans*=(N*N-1)/(N-1);
    return ans;
}
ll EulerPhi(ll N) {
    ll pfIdx = 0, pf = primes[pfIdx], ans = N;
    while (pf * pf <= N) {
        if (N % pf == 0) ans -= ans / pf;
        while (N % pf == 0) N /= pf;
        pf = primes[++pfIdx];
    }
    if (N != 1) ans -= ans / N;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //Code
}
