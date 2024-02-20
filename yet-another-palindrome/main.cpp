#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main() {
  int T, N;
  cin >> T;
  for (int t = 0; t < T; ++t) {
    int N;
    cin >> N;
    unordered_map<int, vector<int>> seen; // {val, indices}
    bool pal = false;
    for (int n = 0; n < N; ++n) {
      int val;
      cin >> val;
      auto it = seen.find(val);
      if (it != seen.end()) {
        if (n - it->second[0] > 1) {
          pal = true;
        }
      }
      seen[val].push_back(n);
    }
    if (pal)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
