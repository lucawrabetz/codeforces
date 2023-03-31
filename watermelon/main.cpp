#include <iostream>

using std::cin;
using std::cout;
using std::stoi;
using std::string;

int main() {
    string in;
    cin >> in;
    int W = stoi(in);

    if (W == 2) cout << "NO";
    else if (W % 2 == 0) cout << "YES";
    else cout << "NO";
}
