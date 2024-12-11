#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string vogais = "aeiouAEIOU";

    string t;
    getline(cin, t);

    int qtdVogais = 0, qtdConsoantes = 0;

    for (size_t i = 0; i < t.size(); i++) {
        if (vogais.find(t[i]) != string::npos) qtdVogais++;
        else qtdConsoantes++;
        
        t[i] = toupper(t[i]);
    }

    cout << "String: " << t << "\n";
    cout << "Vogais: " << qtdVogais << " Consoantes: " << qtdConsoantes << "\n";

    return 0;
}
