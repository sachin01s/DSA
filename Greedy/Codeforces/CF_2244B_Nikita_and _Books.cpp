#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool ok = true;

        for (long long i = 0; i < n - 1; i++) {
            if (a[i] < i + 1) {
                ok = false;
                break;
            }

            long long extra = a[i] - (i + 1);
            a[i] = i + 1;
            a[i + 1] += extra;
        }

        if (ok && a[n - 1] < n)
            ok = false;

        if(ok){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}