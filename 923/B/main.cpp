#include <bits/stdc++.h>
using namespace std;
int main() {
  int T, N;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int N;
    cin >> N;
    vector<unordered_set<char>> next(N + 1);
    next[0] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
               'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string ans;
    for (int i = 0; i < N; i++) {
      int val;
      cin >> val;
      auto it = next[val].begin();
      char c = *it;
      next[val].erase(it);
      next[val + 1].insert(c);
      ans.append(string(1, c));
    }
    cout << ans << endl;
  }
}
