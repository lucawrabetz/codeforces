#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    vector<bool> ans(T, true);
    for (int i=0; i<T; ++i) {
        int N;
        cin >> N;
        string w;
        cin >> w;
        vector<int> cmap(26, -1);
        int prev = 1;
        for (char c : w) {
            if (cmap[c-97] < 0) {
                if (prev==0) {cmap[c-97] = 1; prev = 1;}
                else {cmap[c-97] = 0; prev = 0;}
            }
            else if (cmap[c-97] == 0) {
                if (prev == 0) {ans[i]=false; break;}
                else {prev = 0;}
            }
            else {
                if (prev == 1) {ans[i]=false; break;}
                else {prev = 1;}
            }
        }
    }
    for (bool x : ans) {
        if (x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
