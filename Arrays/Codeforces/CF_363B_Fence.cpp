#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> prefix(n);

    prefix[0] = a[0];

    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + a[i];

    int minSum = INT_MAX;
    int ans = 0;

    for (int i = 0; i <= n - k; i++) {

        int windowSum;

        if (i == 0)
            windowSum = prefix[k - 1];
        else
            windowSum = prefix[i + k - 1] - prefix[i - 1];

        if (windowSum < minSum) {
            minSum = windowSum;
            ans = i;
        }
    }

    cout << ans + 1 << endl;

    return 0;
}