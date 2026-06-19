#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        nums[val - 1] = i;
    }

    int rounds = 1;
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] > nums[i + 1]) rounds++;
    }

    cout << rounds << "\n";
    return 0;
}
