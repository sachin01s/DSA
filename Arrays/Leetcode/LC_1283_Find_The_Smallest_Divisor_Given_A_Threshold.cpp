class Solution {
public:
    bool possible(const vector<int>& nums, int divisor, int threshold) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i] / divisor;
            if (nums[i] % divisor != 0) {
                sum++;
            }
        }
        if (sum <= threshold) {
            return true;
        } else {
            return false;
        }
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int r = *max_element(nums.begin(), nums.end());
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (possible(nums, mid, threshold)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return r;
    }
};
