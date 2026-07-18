#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, m;
        cin >> n >> k >> m;

        if (k > m) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            for (int i = 1; i <= n; ++i) {
                if (i % k == 0) {
                    cout << m - k + 1 << " ";
                } else {
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}