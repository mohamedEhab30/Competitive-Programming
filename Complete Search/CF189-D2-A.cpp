#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 3e5 + 5, mod = 1e9 + 7;
const ll oo = 1e18;
ll a[N];

void solve() {
      vector<int> v(3);
      int n;
      cin >> n >> v[0] >> v[1] >> v[2];
      sort(v.begin(), v.end());
      int ans = 0;
      for (int i = n; i >= 0; i--) {
            for (int j = n; j >= 0; j--) {
                  //i*a + j*b + k*c = n
                  //k = (n - i*a - j*b)/c;
                  int rem = (n - i * v[0] - j * v[1]);
                  if (rem % v[2] == 0 && rem >= 0) {
                        int k = rem / v[2];
                        if ((i * v[0] + j * v[1] + k * v[2]) == n) {
                              ans = max(ans, i + j + k);
                        }
                  }
            }
      }
      cout << ans << endl;
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      while (t--) solve();
}

