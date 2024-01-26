#include <bits/stdc++.h>
using namespace std;
void path(long long& n) {
    long long level = floor(log2(n));
    vector<int> ans(level);
    long long x = n;
    for (int l=level-1; l>=0; l--) {
        if (((x+1)/2) % 2) {
            x = (x+1) / 2;
            ans[l] = 1;
        }
        else {
            x = (x-1) / 2;
            ans[l] = 2;
        }
    }
    cout << level << endl;
    for (int y : ans) {
        cout << y << " ";
    }
    cout << endl;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        long long max = 2199023255551;
        if (N > max) {cout << "-1" << endl;}
        else if (N % 2 == 0) {cout << "-1" << endl;}
        else {
            path(N);
        }
    }
}
