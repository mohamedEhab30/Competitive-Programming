#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 3e5 + 5, mod = 1e9 + 7;
const ll oo = 1e18;
ll a[N];

void solve() {
      string s;
      cin>>s;
      int n = s.length();
      vector<int>x(n+5),y(n+5),z(n+5);
      for(int i=0;i<n;i++){
            x[i+1] = (s[i]=='x') + x[i];
            y[i+1] = (s[i]=='y') + y[i];
            z[i+1] = (s[i]=='z') + z[i];
      }
      int q;
      cin>>q;
      while (q--){
            int l,r;
            cin>>l>>r;
            int xc = x[r] - x[l-1];
            int yc = y[r] - y[l-1];
            int zc = z[r] - z[l-1];
            if(max({xc,yc,zc})-min({xc,yc,zc})<=1 || r-l+1 < 3){
                  cout<<"YES"<<endl;
            } else
                  cout<<"NO"<<endl;
      }
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      while (t--) solve();
}

