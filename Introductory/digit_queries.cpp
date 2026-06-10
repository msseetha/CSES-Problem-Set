#include <iostream>
#include <string>
using namespace std;

void getDigit(long long k) {
    long long digitLen = 1, count = 9, base = 1;
    while (k > digitLen * count) {
        k -= (digitLen * count);
        digitLen++;
        count *= 10;
        base *= 10;
    }
    k--;
    long long num = base + (k / digitLen);
    string s = to_string(num);
    int index = k % digitLen;
    cout << s[index] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long k;
        cin >> k;
        getDigit(k);
    }
    return 0;
}
