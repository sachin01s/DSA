class Solution {
        vector<vector<int>>ans;
        vector<int>current;
public:
    void solve(vector<int>&nums,int i){
        if(i==nums.size()){
            ans.push_back(current);
            return;
        }
        current.push_back(nums[i]); //take
        solve(nums, i + 1); //recurse
        current.pop_back(); //undo

        solve(nums,i + 1); //skip
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums,0);
        return ans;
    }
};