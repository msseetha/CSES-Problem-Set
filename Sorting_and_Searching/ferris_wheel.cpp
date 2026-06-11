#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }
    sort(weights.begin(), weights.end());

    int left = 0, right = n - 1;
    int res = 0;

    while (left <= right) {
        if (left == right) {
            res++;
            break;
        }

        if (weights[left] + weights[right] <= x) {
            left++;
            right--;
        } else {
            right--;
        }
        res++;
    }

    cout << res << "\n";
    return 0;
}
