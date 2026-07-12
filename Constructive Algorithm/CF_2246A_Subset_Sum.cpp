#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n + 1);
        int even = 2, odd = 1;

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                p[i] = even;
                even += 2;
            } else {
                p[i] = odd;
                odd += 2;
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}