#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    map<int, int> map;
    for (int i = 0; i < n; i++) {
        int k = x - nums[i];
        if (map.find(k) != map.end()) {
            cout << map[k] + 1 << " " << i + 1 << "\n";
            return 0;
        }
        map[nums[i]] = i;
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
