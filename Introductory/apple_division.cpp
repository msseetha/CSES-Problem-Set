#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long total = 0;
long long minDiff = 1e18;
int n;
vector<long long> weights;

void divideApples(int index, long long cur) {
    if (index == n) {
        long long diff = abs(cur - (total - cur));
        minDiff = min(minDiff, diff);
        return;
    }
    divideApples(index + 1, cur + weights[index]);
    divideApples(index + 1, cur);
}

int main() {
    cin >> n;
    weights.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
        total += weights[i];
    }
    divideApples(0, 0);
    cout << minDiff << endl;
    return 0;
}
