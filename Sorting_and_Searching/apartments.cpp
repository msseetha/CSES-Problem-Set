#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicants(n), free(m);
    for (int i = 0; i < n; i++) cin >> applicants[i];
    for (int i = 0; i < m; i++) cin >> free[i];

    sort(applicants.begin(), applicants.end());
    sort(free.begin(), free.end());

    int i = 0, j = 0, res = 0;
    while (i < n && j < m) {
        if (free[j] < applicants[i] - k) j++;
        else if (free[j] > applicants[i] + k) i++;
        else {
            res++;
            i++;
            j++;
        }
    }

    cout << res << "\n";
    return 0;
}
