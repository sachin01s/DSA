#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> pref(n), suff(n);

        // pref[i] = compressed length from 0 to i
        pref[0] = 1;
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i-1] + (s[i] != s[i-1]);
        }

        // suff[i] = compressed length from i to n-1
        suff[n-1] = 1;
        for (int i = n-2; i >= 0; i--) {
            suff[i] = suff[i+1] + (s[i] != s[i+1]);
        }

        int ans = INT_MAX;

        // delete only middle characters
        for (int i = 1; i < n-1; i++) {
            int cur = 0;

            // left part
            cur += pref[i-1];

            // right part
            cur += suff[i+1];

            // if the two remaining sides join
            if (s[i-1] == s[i+1])
                cur--;

            ans = min(ans, cur);
        }

        cout << ans << '\n';
    }

    return 0;
}