#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long res = 0;
    while (n > 0) {
        res += (n / 5);
        n /= 5;
    }
    cout << res << endl;
    return 0;
}
