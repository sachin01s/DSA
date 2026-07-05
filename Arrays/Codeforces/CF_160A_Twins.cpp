#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
        cnt++;

        if (sum > total / 2) {
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}