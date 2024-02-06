#include <bits/stdc++.h>
using namespace std;
int main() {
  int T, N;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int N;
    cin >> N;
    string s;
    cin >> s;
    int f = -1;
    int l = -1;
    for (int j = 0; j < N; j++) {
      if (s[j] == 'B') {
        if (f < 0) {
          f = j;
          l = f;
        } else {
          l = j;
        }
      }
    }
    cout << l - f + 1 << endl;
  }
}
