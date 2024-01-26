#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    long long N, F, A, B;
    cin >> N >> F >> A >> B;
    long long curr = 0;
    long long next;
    for (int j = 0; j < N; j++) {
      cin >> next;
      F -= min((B), ((next - curr) * A));
      curr = next;
    }
    if (F > 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
