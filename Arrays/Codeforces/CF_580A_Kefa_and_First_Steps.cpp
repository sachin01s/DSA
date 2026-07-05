#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int curr = 1;
    int max_len = 1;

    int prev;
    cin >> prev;

    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;

        if (x >= prev) {
            curr++;
        } else {
            curr = 1;
        }

        max_len = max(max_len, curr);
        prev = x;
    }

    cout << max_len;
    return 0;
}