#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string line;
    string T;

    getline(cin, T);

    while (getline(cin, line)) {
        if (line.substr(0, 7) == ".......") break;

        T += " " + line;
    }


    cout << T;
}