#include <bits/stdc++.h>
using namespace std;
int main() {
  int T, N;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int l = -1;
    int h = -1;
    int xprev, yprev;
    cin >> xprev >> yprev;
    int xnext, ynext;
    for (int j = 0; j < 3; j++) {
      cin >> xnext >> ynext;
      if (xprev != xnext) {
        l = abs(xprev - xnext);
      }
      if (yprev != ynext) {
        h = abs(yprev - ynext);
      }
      xprev = xnext;
      yprev = ynext;
    }
    cout << l * h << endl;
  }
}
