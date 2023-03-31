#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<string> A(N);
    for (int i=0; i<N; ++i) cin >> A[i];
    for (auto& w : A) {
        if (w.size() > 10) {
            char f = w[0];
            char l = w.back();
            int size = w.size();
            string mid = to_string(size - 2);
            cout << f + mid + l << endl;
        }
        else cout << w << endl;
    }
}
