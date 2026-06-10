#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int total = 1 << n;
    for (int i = 0; i < total; i++) {
        int grayVal = i ^ (i >> 1);
        string binary = "";
        for (int bit = n - 1; bit >= 0; bit--) {
            if ((grayVal >> bit) & 1) {
                binary += '1';
            } else {
                binary += '0';
            }
        }
        cout << binary << "\n";
    }
    return 0;
}
