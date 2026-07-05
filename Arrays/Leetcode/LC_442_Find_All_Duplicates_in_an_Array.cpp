#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int value = abs(nums[i]);
            int home = value - 1;

            if (nums[home] > 0)
                nums[home] = -nums[home];
            else
                ans.push_back(value);
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> ans = obj.findDuplicates(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}