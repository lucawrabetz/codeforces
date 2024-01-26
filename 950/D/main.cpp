#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> B(M);
    for (int j = 0; j < N; j++) {
      cin >> A[j];
    }
    for (int j = 0; j < M; j++) {
      cin >> B[j];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int diff = 0;
    int k = 0;
    int l = N - 1;
    int p = M - 1;
    while (k <= l) {
      if (k == l) {
        diff += max(abs(A[k] - B[k]), abs(A[k] - B[p]));
      } else {
        diff += abs(A[k] - B[p]);
        diff += abs(A[l] - B[k]);
      }
      k++;
      l--;
      p--;
    }
    cout << diff << endl;
  }
}
