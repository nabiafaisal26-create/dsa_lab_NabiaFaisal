#include <iostream>
#include <string>
using namespace std;

int naivePatternMatch(const string& text, const string& pattern) {
    if (pattern.empty()) return -1;
    int n = (int)text.length();
    int m = (int)pattern.length();

    for (int i = 0; i <= n - m; ++i) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) ++j;
        if (j == m) return i;
    }
    return -1;
}

int main() {
    string text, pattern;

    cout << "Enter line: ";
    getline(cin, text);

    cout << "key: ";
    getline(cin, pattern);

    int index = naivePatternMatch(text, pattern);

    if (index != -1)
        cout << "index " << index << '\n';
    else
        cout << "index -1" << '\n';

    return 0;
}
