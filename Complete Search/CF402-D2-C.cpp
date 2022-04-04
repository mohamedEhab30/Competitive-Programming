#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 3e5 + 5, mod = 1e9 + 7;
const ll oo = 1e18;
ll a[N];

void solve() {
      int n,p;
      cin>>n>>p;
      for(int i=1,u=1,v=2;i<=n*2 + p;i++){
            cout<<u<<" "<<v<<endl;
            v++;
            if(v>n)
                  u++,v=u+1;
      }
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      while (t--) solve();
}

