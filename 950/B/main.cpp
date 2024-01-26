#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int N;
    string S, F;
    cin >> N;
    cin >> S >> F;
    int add = 0;
    int rem = 0;
    for (int j = 0; j < N; j++) {
      if (S[j] == '1' && F[j] == '0') {
        rem++;
      }
      if (S[j] == '0' && F[j] == '1') {
        add++;
      }
    }
    cout << max(add, rem) << endl;
  }
}
