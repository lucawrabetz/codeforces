#include <bits/stdc++.h>
using namespace std;
int main() {
  int T, N;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int N;
    cin >> N;
    vector<string> rows(N);
    for (int n = 0; n < N; n++) {
      cin >> rows[n];
    }
    bool one = false;
    bool triangle = false;
    bool square = false;
    char a[N];
    int first_i = -1;
    for (int n = 0; n < N; n++) {
      if (first_i == -1) {
        for (int i = 0; i < N; ++i) {
          if (rows[n][i] == '1') {
            first_i = i;
            break;
          }
        }
      } else {
        for (int i = 0; i < N; ++i) {
          if (rows[n][i] == '1') {
            if (i == first_i) {
              square = true;
            } else {
              triangle = true;
            }
            break;
          }
        }
      }
      if (square) {
        cout << "SQUARE" << endl;
        break;
      }
      if (triangle) {
        cout << "TRIANGLE" << endl;
        break;
      }
    }
  }
}
