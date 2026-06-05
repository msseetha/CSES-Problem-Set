#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long mod = 1e9 + 7;
    long long res = 1;
    for (int i = 0; i < n; i++) {
        res = (res * 2) % mod;
    }
    cout << res % mod;
    return 0;
}
