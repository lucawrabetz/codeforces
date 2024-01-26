#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    int i = 1;
    bool ans = false;
    while (N--) {
        int x;
        cin >> x;
        if (x <= i) {
            ans = true;
        }
        i++;
    }
    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}
