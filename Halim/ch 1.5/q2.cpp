#include <bits/stdc++.h>
#include <vector>
using namespace std;

void occurrences_substring(string s, string sub) {
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string t, p;
    
    getline(cin, t);
    getline(cin, p);

    std::vector<int> indices;

    // Primeira ocorrencia
    size_t pos = t.find(p, 0);

    // Buscar por outras ocorrencias
    while (pos != std::string::npos) {
        indices.push_back(pos);

        pos = t.find(p, pos + 1);
    }

    if (indices.empty()) {
        indices.push_back(-1);
    }

    for (size_t i = 0; i < indices.size(); i++) {
        if (i != 0)
            cout << ", ";
        cout << indices[i];
    }

    cout << "\n";
    return 0;
}
