#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int i=0; i<T; ++i) {
        int N, Q;
        cin >> N >> Q;
        vector<int> A(N);
        int main_tot = 0;
        for (int j=0; j<N; ++j) {
            cin >> A[j];
            main_tot += A[j];
        }
        for (int j=0; j<Q; ++j) {
            int L, R, K;
            cin >> L >> R >> K;
            int tot = main_tot - 
                accumulate(A.begin()+L-1,
                        A.begin()+R, 0);
            tot += K * (R - L + 1);
            if (tot%2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
