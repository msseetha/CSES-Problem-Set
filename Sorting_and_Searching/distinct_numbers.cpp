#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, res = 1;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) res++;
    }

    cout << res;
    return 0;
}
