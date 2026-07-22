class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int ans = 0;
        int zeroes = 0;
        //Expand the window
        for(int right = 0; right<nums.size();++right){
            //count zeroes
            if(nums[right]==0){
                zeroes++;
            }
            //shrink until it becomes valid
            while(zeroes>k){
                if(nums[left]==0){
                    zeroes--;
                }
                left++;
            }
            //update max win len
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};