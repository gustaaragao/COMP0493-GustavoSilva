#include <bits/stdc++.h>
using namespace std;

void lower(string& s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
}

map<string, int> count_words(const string& s) {
    map<string, int> mp;
    
    stringstream ss(s);
    string word;

    while (ss >> word) {
        lower(word); // WORD == word
        
        mp[word]++;
    }

    return mp;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string t =  "I love CS3233 Competitive Programming. i also love AlGoRiThM";

    map<string, int> mp = count_words(t);

    int max = 0;
    vector<string> words_max;

    for (const auto &pair : mp) {
        if (pair.second > max) {
            max = pair.second;
            words_max.clear();
            words_max.push_back(pair.first);
        } else if (pair.second == max) {
            words_max.push_back(pair.first);
        }
    }

    for (auto word : words_max) {
        cout << word << "\n";
    }

    return 0;
}
