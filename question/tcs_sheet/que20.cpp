#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());  // sort excluded numbers

    int start = l;

    for (int i = 0; i < n; i++) {
        // skip excluded numbers outside the range
        if (a[i] < l || a[i] > r) continue;

        // print current valid range before this excluded number
        if (start <= a[i] - 1) {
            cout << "[" << start << " " << a[i] - 1 << "] ";
        }

        // move start to next number after the excluded one
        start = a[i] + 1;
    }

    // print last range if any remains
    if (start <= r)
        cout << "[" << start << " " << r << "]";

    return 0;
}
