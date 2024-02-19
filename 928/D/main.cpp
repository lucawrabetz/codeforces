#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main() {
  int T, N;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int N;
    cin >> N;
    map<int, int> counts;
    for (int n = 0; n < N; n++) {
      int x;
      cin >> x;
      counts[x]++;
    }
    int ans = N;
    for (const auto &[x, c_x] : counts) {
      int y = 0;
      for (int i = 0; i < 31; ++i) {
        if (!(x & (1 << i))) {
          y += (1 << i);
        }
      }
      if (counts[y] && y > x) {
        ans -= min(counts[y], c_x);
      }
    }
    cout << ans << endl;
  }
}
