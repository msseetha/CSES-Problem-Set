#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<long long> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    long long median = nums[n / 2];
    long long res = 0;
    for (int i = 0; i < n; i++) {
        res += abs(median - nums[i]);
    }

    cout << res << "\n";
    return 0;
}
