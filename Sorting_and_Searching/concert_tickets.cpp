#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    multiset<int> tickets;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        tickets.insert(t);
    }

    for(int i = 0; i < m; i++) {
        int maxPrice;
        cin >> maxPrice;
        auto it = tickets.upper_bound(maxPrice);
        if (it == tickets.begin()) {
            cout << -1 << "\n";
        } else {
            cout << *(--it) << "\n";
            tickets.erase(it);
        }
    }

    return 0;
}
