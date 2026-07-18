class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long currSum=0;
        long long maxSum=currSum;
        for(int i = 0;i<k;++i){
            currSum+=nums[i];
        }
        maxSum=currSum;
        int left = 0;
        int  right = k;

        while(right<nums.size()){
            currSum = currSum-nums[left]+nums[right];
            maxSum = max(maxSum,currSum);
            left++;
            right++;
        }
        return (double)maxSum/k;
    }
};