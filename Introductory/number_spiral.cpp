#include <iostream>
using namespace std;

void solve(long long x, long long y) {
    long long res = 0;
    if (x <= y) {
        if (y % 2 == 0) {
            res = (y - 1) * (y - 1) + x;
        } else {
            res = y * y - (x - 1);
        }
    } else {
        if (x % 2 == 0) {
            res = x * x - (y - 1);
        } else {
            res = (x - 1) * (x - 1) + y;
        }
    }
    cout << res << "\n";
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
        solve(x, y);
    }
    return 0;
}
