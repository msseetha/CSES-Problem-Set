#include <iostream>
using namespace std;

void solve(long long a, long long b) {
    if ((a + b) % 3 != 0) {
        cout << "NO\n";
    } else {
        if (min(a, b) >= (a + b) / 3) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
