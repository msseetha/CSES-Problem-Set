#include <ios>
#include <iostream>
using namespace std;

void hanoi(int n, int src, int dest, int aux) {
    if (n == 1) {
        cout << src << " " << dest << "\n";
        return;
    }
    hanoi(n - 1, src, aux, dest);
    cout << src << " " << dest << "\n";
    hanoi(n - 1, aux, dest, src);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int steps = (1 << n) - 1;
    cout << steps << "\n";
    hanoi(n, 1, 3, 2);
    return 0;
}
