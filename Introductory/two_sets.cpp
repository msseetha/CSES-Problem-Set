#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long total = (n * (n + 1)) / 2;
    if (total % 2 != 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        total /= 2;

        vector<int> v1, v2;
        for (int i = n; i > 0; i--) {
            if (total > 0 && i <= total) {
                v1.push_back(i);
                total -= i;
            } else {
                v2.push_back(i);
            }
        }

        cout << v1.size() << "\n";
        for (auto& num : v1) {
            cout << num << " ";
        }
        cout << "\n";

        cout << v2.size() << "\n";
        for (auto& num : v2) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
