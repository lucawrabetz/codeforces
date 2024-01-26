#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
void solve() {
    int N, C, D;
    cin >> N >> C >> D;
    unordered_set<int> seen;
    int cost = 0;
    int max_seen = INT_MIN;
    int min_seen = INT_MAX;
    while (N--) {
        int x;
        cin >> x;
        if (seen.count(x) > 0) cost += C;
        else {
            seen.insert(x);
            if (x > max_seen) max_seen = x;
            if (x < min_seen) min_seen = x;
        }
    }
    vector<int> cost_option(max_seen);
    // insertion
    for (int i=1; i<=max_seen; i++) {
        if (seen.count(i) > 0) cost_option[i-1] = C;
        else cost_option[i-1] = D;
    }
    vector<int> before_cost(max_seen);
    vector<int> after_cost(max_seen);
    for (int i=0; i<max_seen; i++) {
        before_cost
    }
    // deletion
    int ccost = 0;

    cout << cost << endl;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
