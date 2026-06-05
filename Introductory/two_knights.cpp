#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    for (int i = 1; i <= k; i++) {
        long long cells = i * i;
        if (i == 1) {
            cout << 0 << endl;
        }
        else {
            long long total = (cells * (cells - 1)) / 2;
            long long blocked = 4 * (i - 2) * (i - 1);
            cout << total - blocked << endl;
        }
    }

    return 0;
}
