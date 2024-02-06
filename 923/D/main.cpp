#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

void query(const vector<int> &v, int l, int r) {
  if (l == r) {
    cout << "-1 -1" << endl;
    return;
  }
  int i = l;
  for (int j = i + 1; j <= r; j++) {
    if (v[i] != v[j]) {
      cout << i + 1 << " " << j + 1 << endl;
      return;
    }
  }
  cout << "-1 -1" << endl;
  return;
}

int main() {
  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
      cin >> a[i];
    }
    int Q;
    cin >> Q;
    for (int q = 0; q < Q; q++) {
      int l, r;
      cin >> l >> r;
      query(a, l - 1, r - 1);
    }
    cout << endl;
  }
}
