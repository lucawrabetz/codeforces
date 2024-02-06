#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

string solve(int n, int m, int k, vector<int> &a, vector<int> &b) {
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  vector<int> a_r;
  vector<int> b_r;
  int i = 0;
  while (i < n) {
    int val = a[i];
    if (val > k)
      break;
    a_r.push_back(val);
    while (a[i] == val) {
      i++;
    }
  }
  if (a_r.size() < k / 2)
    return "NO";
  i = 0;
  while (i < m) {
    int val = b[i];
    if (val > k)
      break;
    b_r.push_back(val);
    while (b[i] == val) {
      i++;
    }
  }
  if (b_r.size() < k / 2)
    return "NO";
  vector<int> dst;
  merge(a_r.begin(), a_r.end(), b_r.begin(), b_r.end(), back_inserter(dst));
  unordered_set<int> final_vals(dst.begin(), dst.end());
  for (int x = 1; x < k + 1; x++) {
    if (final_vals.find(x) == final_vals.end())
      return "NO";
  }
  return "YES";
}

int main() {
  int T, N;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> a(N);
    vector<int> b(M);
    for (int i = 0; i < N; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < M; i++) {
      cin >> b[i];
    }
    cout << solve(N, M, K, a, b) << endl;
  }
}
