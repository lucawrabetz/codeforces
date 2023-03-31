#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    vector<bool> ans(T);
    for (int i=0; i<T; ++i) {
        int N;
        cin >> N;
        int odd = 0;
        int even = 0;
        for (int j=0; j<N; ++j) {
            int x;
            cin >> x;
            if (x % 2) odd+=x;
            else even+=x;
        }
        if (even>odd) ans[i]=true;
        else ans[i]=false;
    }
    for (bool y : ans) {
        if (y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
