#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> slots;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        slots.push_back({a, 1});
        slots.push_back({b, -1});
    }
    sort(slots.begin(), slots.end());

    int res = 0, cur = 0;
    for (auto& slot : slots) {
        cur += slot.second;
        res = max(res, cur);
    }

    cout << res << "\n";
    return 0;
}
