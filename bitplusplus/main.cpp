#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int x = 0;
    for (int i=0; i<N; ++i) {
        string op;
        cin >> op;
        for (char c : op) {
            if (c == '+') {
                x++;
                break;
            }
            else if (c == '-') {
                x--;
                break;
            }
        }
    }
    cout << x;
}
