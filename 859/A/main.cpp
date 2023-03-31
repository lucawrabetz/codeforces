#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    int A,B,C;
    cin >> T;
    vector<char> ans(T);
    for (int i=0; i<T; ++i) {
        cin >> A >> B >> C;
        if (A+B==C) ans[i]='+';
        else ans[i]='-';
    }
    for (char x : ans) {
        cout << x << endl;
    }
}
