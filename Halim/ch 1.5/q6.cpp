#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("input.txt", "r", stdin);

    string line;

    // dessa maneira eu consigo acessar a ultima linha de um arquivo
    // alem disso, o getline captura toda a linha do terminal (ou arquivo)
    while (getline(cin, line)); 

    cout << "Ultima linha: " << line << "\n";
}