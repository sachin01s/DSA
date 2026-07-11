class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n = nums.size();

        // Step 1: Build prefix sum array
        vector<int> prefix(n);

        prefix[0] = nums[0];

        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + nums[i];
        }

        // Step 2: Check every index
        for(int i = 0; i < n; i++) {

            int leftSum = 0;

            if(i > 0)
                leftSum = prefix[i-1];

            int rightSum = prefix[n-1] - prefix[i];

            if(leftSum == rightSum)
                return i;
        }

        return -1;
    }
};