#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

int emphasis(string word) {
    int res = 0;
    for (int i = 0; i < word.size(); i++) {
        if ('A' <= word[i] && word[i] <= 'Z') {
            if (res == 0)
                res = i + 1;
            else
                return 0;
        }
    }
    return res;
}

string lower(string word) {
    for (int i = 0; i < word.size(); i++) {
        if ('A' <= word[i] && word[i] <= 'Z')
            word[i] = (char)(word[i] - 'A' + 'a');
    }
    return word;
}

int sandbox() {
    map<string, set<int>> dict;
    int n, res = 0, emph;
    string word;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> word;
        emph = emphasis(word);
        word = lower(word);
        dict[word].insert(emph);
    }
    while (cin >> word) {
        emph = emphasis(word);
        word = lower(word);
        if (dict.find(word) != dict.end() && dict[word].find(emph) == dict[word].end())
            res++;
    }
    return 0;
}