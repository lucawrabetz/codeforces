#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int ans = 0;
    for (int i=0; i<N; ++i) {
        int P, V, T; cin >> P >> V >> T;
        int tot = P + V + T;
        if (tot > 1) ans++;
    }
    cout << ans;
}
