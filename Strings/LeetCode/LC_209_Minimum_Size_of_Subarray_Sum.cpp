class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int minLen = INT_MAX;
        for(int right = 0; right<nums.size();right++){
            //Exapnding the window
            sum+=nums[right];
            while(sum>=target){
                //updating first window
                minLen = min(minLen, right - left + 1);
                //shrinking and checking it's still valid 
                sum=sum-nums[left];
                left++;
            }
        }
        if(minLen==INT_MAX){
            return 0;
        }else{
            return minLen;
        }
    }
};