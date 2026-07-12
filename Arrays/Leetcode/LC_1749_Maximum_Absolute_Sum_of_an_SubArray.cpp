class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int curr = nums[0];
        int best = nums[0];

        for(int i = 1;i<nums.size();i++){
            curr = max(nums[i],curr+nums[i]);
            best = max(best , curr);
        }

        int currmin = nums[0];
        int best2lol = nums[0];

        for(int i = 1 ;i<nums.size();i++){
            currmin = min(nums[i],currmin+nums[i]);
            best2lol = min(best2lol,currmin);
        }
        return max(best,abs(best2lol));
    }
};