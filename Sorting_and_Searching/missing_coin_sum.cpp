#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<long long> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    sort(coins.begin(), coins.end());

    long long reach = 1;
    for (int i = 0; i < n; i++) {
        if (coins[i] > reach) break;
        reach += coins[i];
    }

    cout << reach << "\n";
    return 0;
}
