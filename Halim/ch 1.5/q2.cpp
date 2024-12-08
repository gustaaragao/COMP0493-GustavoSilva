#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> occurrences_substring(const string& s,const string& sub) {
    vector<int> occurrences; // indexes of occurences

    // First occurence
    size_t pos = s.find(sub, 0);

    // The others
    while (pos != string::npos) {
        occurrences.push_back(pos);

        pos = s.find(sub, pos + 1);
    }

    if (occurrences.empty()) {
        occurrences.push_back(-1);
    }

    return occurrences;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string t, p;
    
    getline(cin, t);
    getline(cin, p);

    vector<int> indices = occurrences_substring(t, p);

    for (size_t i = 0; i < indices.size(); i++) {
        if (i != 0)
            cout << ", ";
        cout << indices[i];
    }

    cout << "\n";
    return 0;
}
