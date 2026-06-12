#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<long long> nums(n);
    nums[0] = x;
    for (int i = 1; i < n; i++) {
        nums[i] = (a * nums[i - 1] + b) % c;
    }

    long long res = 0, cur = 0;
    for (int i = 0; i < k; i++) {
        cur ^= nums[i];
    }
    res ^= cur;
    for (int i = k; i < n; i++) {
        cur ^= nums[i];
        cur ^= nums[i - k];
        res ^= cur;
    }

    cout << res << "\n";
    return 0;
}
