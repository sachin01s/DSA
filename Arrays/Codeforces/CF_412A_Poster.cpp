#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    bool goRight = false;

    if (n - k < k - 1) {
        goRight = true;
    }

    if (goRight) {

        while (k < n) {
            cout << "RIGHT\n";
            k++;
        }

        for (int i = n; i >= 1; i--) {
            cout << "PRINT " << s[i - 1] << '\n';

            if (i != 1) {
                cout << "LEFT\n";
            }
        }

    } else {

        while (k > 1) {
            cout << "LEFT\n";
            k--;
        }

        for (int i = 1; i <= n; i++) {
            cout << "PRINT " << s[i - 1] << '\n';

            if (i != n) {
                cout << "RIGHT\n";
            }
        }
    }

    return 0;
}