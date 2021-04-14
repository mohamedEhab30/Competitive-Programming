#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool dp[21][250];
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int m,c;
        cin>>m>>c;
        vector<vector<int>>v(c+5);
        for(int i=1;i<=c;i++)
        {
            int k;
            cin>>k;
            for(int j=0;j<k;j++)
            {
                int y;
                cin>>y;
                v[i].push_back(y);
            }
        }
        memset(dp,0,sizeof (dp));
        for(int i=0;i<v[1].size();i++)
        {
            if(m-v[1][i]>=0)
                dp[1][m-v[1][i]]=1;
        }
        for(int i=2;i<=c;i++)
        {
            for(int k=1;k<=m;k++)
            {
                if(dp[i-1][k])
                {
                    for(int j=0;j<v[i].size();j++)
                    {
                        if(k-v[i][j]>=0)
                            dp[i][k-v[i][j]]=1;
                    }
                }
            }
        }
        ll ans=-1;
        for(int i=0;i<=m;i++)
        {
            if(dp[c][i])
            {
                ans=m-i;
                break;
            }
        }
        if(~ans)
            cout<<ans<<endl;
        else
            cout<<"no solution"<<endl;
    }
}
