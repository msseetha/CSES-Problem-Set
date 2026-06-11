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

    long long res = nums[0], cur = nums[0];
    for (int i = 1; i < n; i++) {
        cur = max(nums[i], cur + nums[i]);
        res = max(res, cur);
    }

    cout << res << "\n";
    return 0;
}
