class Solution {
    vector<vector<int>> ans;
    vector<int> current;

    void solve(vector<int>& nums, int start) {
        ans.push_back(current);

        for (int j = start; j < nums.size(); j++) {
            if (j > start && nums[j] == nums[j - 1])
                continue;

            current.push_back(nums[j]);
            solve(nums, j + 1);
            current.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        solve(nums, 0);
        return ans;
    }
}; 