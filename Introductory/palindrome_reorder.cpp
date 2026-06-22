#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    unordered_map<char, int> freq;
    for (char ch : s) freq[ch]++;

    char center = '\0';
    int odd = 0;
    for (const auto& [ch, count] : freq) {
        if (count % 2 != 0) {
            odd++;
            center = ch;
            if (odd > 1) {
                cout << "NO SOLUTION\n";
                return 0;
            }
        }
    }

    string res;
    for (const auto& [ch, count] : freq) {
        res.append(count / 2, ch);
    }

    if (center != '\0') {
        res += center;
    }

    int len = s.length() / 2;
    for (int i = len - 1; i >= 0; i--) {
        res.push_back(res[i]);
    }

    cout << res << "\n";
    return 0;
}
