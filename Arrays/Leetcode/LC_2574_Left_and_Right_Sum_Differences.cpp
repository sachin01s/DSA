class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int>prefix(n);
        vector<int> leftSum(n);
        vector<int> rightSum(n);
        prefix[0]=nums[0];
        for(int i = 1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        for(int i = 0 ;i<n;i++){
            if(i>0){
                leftSum[i]=prefix[i-1];
            }
            rightSum[i]=prefix[n-1]-prefix[i];
            ans[i] = abs(leftSum[i] - rightSum[i]);
        }
        return ans;
        
    }
};