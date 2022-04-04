#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 3e5 + 5, mod = 1e9 + 7;
const ll oo = 1e18;
ll a[N];

void solve() {
      string s;
      while (cin>>s){
            int n = s.length();
            string tmp = s;
            vector<string>v(22);
            for(int i=11;i>=1;i--){
                  v[i] = s;
                  prev_permutation(s.begin(), s.end());
            }
            for(int i=12;i<=21;i++){
                  next_permutation(tmp.begin(), tmp.end());
                  v[i] = tmp;
            }
            string ans;
            int mx = 0;
            for(int i=1;i<=21;i++){
                  string tmp = v[i];
                  int q = 1e9;
                  for(int j=1;j<n;j++){
                        q = min(q, abs(v[i][j] - v[i][j-1]));
                  }
                  if(q>mx){
                        ans = tmp;
                        mx = q;
                  }
            }
            cout<<ans<<mx<<endl;
      }
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      while (t--) solve();
}

