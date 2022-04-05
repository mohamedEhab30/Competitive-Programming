#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 3e5 + 5, mod = 1e9 + 7;
const ll oo = 1e18;
vector<int> a[2];
void solve() {
      int n,k,p;
      cin>>n>>k>>p;
      for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[x%2].push_back(x);
      }
      vector<vector<int>>ans(k+5);
      for(int i=0;i<p;i++){
            if(a[0].size()){
                  ans[i+1].push_back(a[0].back());
                  a[0].pop_back();
            } else if(a[1].size()>=2){
                  ans[i+1].push_back(a[1].back());
                  a[1].pop_back();
                  ans[i+1].push_back(a[1].back());
                  a[1].pop_back();
            } else{
                  cout<<"NO"<<endl;
                  return;
            }
      }
      for(int i=p+1;i<=k;i++){
            if(a[1].size()){
                  ans[i].push_back(a[1].back());
                  a[1].pop_back();
            } else{
                  cout<<"NO"<<endl;
                  return;
            }
      }
      ll sum = 0;
      for(int i=0;i<2;i++){
            for(auto x:a[i])
                  sum += x;
      }
      if(sum%2==0){
            while (a[0].size()){
                  ans[1].push_back(a[0].back());
                  a[0].pop_back();
            }
            while (a[1].size()){
                  ans[1].push_back(a[1].back());
                  a[1].pop_back();
            }
      } else{
            cout<<"NO"<<endl;
            return;
      }
      cout<<"YES"<<endl;
      for(int i=1;i<=k;i++){
            cout<<ans[i].size()<<" ";
            for(int j=0;j<ans[i].size();j++){
                  cout<<ans[i][j]<<" ";
            }
            cout<<endl;
      }
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      while (t--) solve();
}

