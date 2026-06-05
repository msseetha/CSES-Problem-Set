#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long exp = (n * (n + 1)) / 2;
    long long actual = 0;
    for (int i = 0; i < n - 1; i++) {
        int temp;
        cin >> temp;
        actual += temp;
    }
    cout << exp - actual;
    return 0;
}
