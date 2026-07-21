#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0;
    int right = n - 1;

    int leftTime = 0;
    int rightTime = 0;

    int alice = 0;
    int bob = 0;

    while (left <= right) {

        if (leftTime <= rightTime) {
            leftTime += a[left];
            left++;
            alice++;
        } else {
            rightTime += a[right];
            right--;
            bob++;
        }
    }

    cout << alice << " " << bob << "\n";

    return 0;
}