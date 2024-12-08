#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<string> simple_tokenizer(string s) {
    // Time: O(n) Space: O(n)
    vector<string> tokens;
    stringstream ss(s);
    string word;

    while (ss >> word) {
        tokens.push_back(word);
    }

    return tokens;
}

vector<string> adv_tokenizer(string s, char del) {
    // Time: O(n) Space: O(n)
    vector<string> tokens;
    stringstream ss(s);
    string word;

    while (!ss.eof()) { // .eof = END OF FILE
        getline(ss, word, del); // (canal da string, var que armazena, delimitador)
        tokens.push_back(word);
    }

    return tokens;
}

vector<string> tokenizer(string s, string del = " ") {
    // Time: O(n) Space: O(1) 
    vector<string> tokens;
    
    int start, end = -1*del.size();
    do {
        start = end + del.size();
        end = s.find(del, start);
        tokens.push_back(s.substr(start, end - start));
    } while (end != -1);

    return tokens;
}

void sort_lexicografica(vector<string>& v) {
    sort(v.begin(), v.end());
}

void sort_anti_lexicografica(vector<string>& v) {
    sort(v.begin(), v.end(), std::greater<std::string>());
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    string test1, test2, test3;
    vector<string> tokens1, tokens2, tokens3;
    
    test1 = "gustavo henrique aragao silva";
    test2 = "gustavo#henrique#aragao#silva";
    test3 = "gustavo$!#henrique$!#aragao$!#silva";

    tokens1 = simple_tokenizer(test1);
    for (string token : tokens1) {
        cout << token << "\n";
    }

    tokens2 = adv_tokenizer(test2, '#');
    for (string token : tokens2) {
        cout << token << "\n";
    }

    tokens3 = tokenizer(test3, "$!#");    
    for (string token : tokens3) {
        cout << token << "\n";
    }

    sort_lexicografica(tokens3);

    cout << "ordenado: " << "\n";

    for (string token : tokens3) {
        cout << token << "\n";
    }

    sort_anti_lexicografica(tokens3);

    cout << "ordenado em decrescente: " << "\n";

    for (string token : tokens3) {
        cout << token << "\n";
    }

    return 0;
}
