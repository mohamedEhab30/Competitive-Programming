#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 3e5 + 5, mod = 1e9 + 7;
const ll oo = 1e18;
ll a[N];

bool sol(int idx, int res) {
      if (idx >= 5)
            return res == 23;
      return sol(idx + 1, res * a[idx]) |
             sol(idx + 1, res + a[idx]) |
             sol(idx + 1, res - a[idx]);
}

void solve() {
      while (1) {
            for (int i = 0; i < 5; i++) cin >> a[i];
            if (!a[0]) break;
            sort(a,a+5);
            bool f = 1;
            do {
                  if (sol(1, a[0])) {
                        cout << "Possible" << endl;
                        f = 0;
                        break;
                  }
            } while (next_permutation(a, a + 5));
            if (f)
                  cout << "Impossible" << endl;
      }
}

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      while (t--) solve();
}

