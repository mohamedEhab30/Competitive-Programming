#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll mod=1e9+7;
ll mtr[600][600];
ll n,m,k;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>mtr[i][j];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((i+j)&1)
            {
                cout<<720720+mtr[i][j]*mtr[i][j]*mtr[i][j]*mtr[i][j]<<" ";
            }else
                cout<<720720<<" ";
        }
        cout<<endl;
    }
}
