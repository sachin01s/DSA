class Solution {
public:
    int FirstTrue(const vector<int>& nums,int target){
        int l = 0;
        int r = nums.size();
        while(l<r){
            int mid = l+(r-l)/2;
            if(nums[mid]>=target){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
    int FirstGreater(const vector<int>& nums,int target){
        int l = 0;
        int r = nums.size();
        while(l<r){
            int mid = l+(r-l)/2;
            if(nums[mid]>target){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = FirstTrue(nums,target);
            if(first==nums.size() || nums[first]!=target){
                return {-1,-1};
            }
        int last = (FirstGreater(nums,target))-1;
        return {first,last};
    }
};