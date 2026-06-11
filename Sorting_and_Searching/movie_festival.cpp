#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> movies(n);
    for (int i = 0; i < n; i++) {
        cin >> movies[i].second >> movies[i].first;
    }
    sort(movies.begin(), movies.end());

    int res = 0, end = -1;
    for (int i = 0; i < n; i++) {
        if (movies[i].second >= end) {
            res++;
            end = movies[i].first;
        }
    }

    cout << res << "\n";
    return 0;
}
