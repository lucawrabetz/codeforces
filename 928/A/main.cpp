#include <bits/stdc++.h>
using namespace std;
int main() {
  int T, N;
  cin >> T;
  for (int t = 0; t < T; t++) {
    string s;
    cin >> s;
    int a = 0;
    for (int n = 0; n < 5; n++) {
      if (s[n] == 'A') {
        a++;
      }
    }
    if (a > 2)
      cout << 'A' << endl;
    else
      cout << 'B' << endl;
  }
}
