class Solution {
public:
    bool possible(vector<int>& nums,int k,int capacity){
        int parts = 1;
        int currSum = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(currSum + nums[i]<=capacity){
                currSum+=nums[i];
            }else{
                parts++;
                currSum=nums[i];
            }
        }
        return parts<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(),nums.end());
        int r = 0;
        for(int n : nums){
            r+=n;
        }
        while(l<r){
            int mid = l+(r-l)/2;
            if(possible(nums,k,mid)){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};