#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    long long x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<long long> nums(n);
    nums[0] = x;
    for (int i = 1; i < n; i++) {
        nums[i] = (a * nums[i - 1] + b) % c;
    }

    long long res = 0;
    deque<int> dq;

    for (int i = 0; i < n; i++) {
        if (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        while (!dq.empty() && nums[dq.back()] >= nums[i]) {
            dq.pop_back();
        }

        dq.push_back(i);
        if (i >= k - 1) {
            res ^= nums[dq.front()];
        }
    }

    cout << res << "\n";
    return 0;
}
