#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long curMax, res = 0;
    cin >> curMax;

    for (int i = 1; i < n; i++) {
        long long cur;
        cin >> cur;
        if (curMax > cur) res += (curMax - cur);
        else curMax = cur;
    }

    cout << res;
    return 0;
}
