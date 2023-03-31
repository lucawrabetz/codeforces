#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, D;
    cin >> N >> D;
    vector<int> X(N);
    for (int i=0; i<N; ++i) {
        cin >> X[i];
    }
    int count = 2;
    for (int i=0; i<N-1; ++i) {
        int x = X[i]+D;
        int y = X[i+1]-D;
        if (x == y) count++;
        if (y > x) count+=2;
    }
    cout << count;
}
