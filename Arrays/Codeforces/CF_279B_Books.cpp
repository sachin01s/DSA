#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> books(n);

    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }

    int ans = 0;
    int left = 0;
    int sum = 0;

    //expand the window
    for (int right = 0; right < n; right++) {
        sum+=books[right];
        
        // Shrink while the window is invalid
        while(sum>t){
            sum-=books[left];
            left++;
        }
        //update
        ans = max(ans,right-left+1);
    }

    cout << ans << endl;

    return 0;
}