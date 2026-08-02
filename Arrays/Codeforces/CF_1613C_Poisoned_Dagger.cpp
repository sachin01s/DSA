#include <bits/stdc++.h>
using namespace std;

bool possible(long long k, vector<long long>& a, long long h){
    long long damage = 0;
    for(int i = 0; i < a.size() - 1; i++){
        damage += min(k, a[i+1] - a[i]);
    }
    damage += k; // last attack
    return damage >= h;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        long long h;

        cin >> n >> h;

        vector<long long> a(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        long long low = 1;
        long long high = h;
        long long ans = h;

        while(low <= high){
            long long mid = low + (high - low) / 2;

            if(possible(mid, a, h)){
                ans = mid;        // mid works, try smaller
                high = mid - 1;
            }
            else{
                low = mid + 1;    // mid is too small
            }
        }
        cout << ans << endl;
    }
    return 0;
}