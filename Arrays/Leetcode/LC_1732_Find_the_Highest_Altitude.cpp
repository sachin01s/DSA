class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int currAlt = 0;
        int ans = 0;

        for(int i=0; i<n ; i++ ){
            currAlt += gain[i];
            ans = max(ans,currAlt);
        }
        return ans;
    }
};