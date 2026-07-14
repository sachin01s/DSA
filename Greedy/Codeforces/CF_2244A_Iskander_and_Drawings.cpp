#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = 0;
        int cnt = 0;

        for (char c : s) {
            if (c == '#') {
                cnt++;
            } else {
                ans = max(ans, (cnt + 1) / 2);
                cnt = 0;
            }
        }

        // Handle the last block if the string ends with '#'
        ans = max(ans, (cnt + 1) / 2);

        cout << ans << "\n";
    }

    return 0;
}