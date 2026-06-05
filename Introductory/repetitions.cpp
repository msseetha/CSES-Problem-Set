#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int res = 1, cur = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) cur++;
        else cur = 1;
        res = max(res, cur);
    }
    cout << res;
    return 0;
}
