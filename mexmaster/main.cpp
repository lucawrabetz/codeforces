#include <bits/stdc++.h>
using namespace std;
int main() {
    int T, N;
    cin >> T;
    vector<int> ans(T);
    for (int i=0; i<T; ++i) {
        cin >> N;
        vector<int> X(N);
        for (int j=0; j<N; ++j) {
            cin >> X[j];
        }
        int num_zeros = 0;
        int num_ones = 0;
        bool large = false;
        for (int x : X) {
            if (x == 0) num_zeros++;
            if (x == 1) num_ones++;
            if (x > 1) large = true;
        }
        double n = N;
        if (ceil(n / 2) >= num_zeros) {
            ans[i] = 0; continue;
        }
        if (large || num_ones == 0) ans[i] = 1;
        else ans[i] = 2;
    }
    for (int i=0; i<T; ++i) {
        cout << ans[i] << endl;
    }
}
