#include <bits/stdc++.h>
using namespace std;
int digits(int x) {
  int sum = 0;
  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}
int main() {
  constexpr int LIM = 2e5;
  int s[LIM + 1];
  s[0] = 0;
  for (int i = 1; i <= LIM; ++i) {
    s[i] = s[i - 1] + digits(i);
  }
  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int N;
    cin >> N;
    cout << s[N] << endl;
  }
}
