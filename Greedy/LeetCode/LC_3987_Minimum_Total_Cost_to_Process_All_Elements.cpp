class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long MOD = 1e9 + 7;

        long long resources = k;
        long long totalOps = 0;

        vector<int> sovalemrin = nums;

        for (int i = 0; i < nums.size(); i++) {
            if (resources >= nums[i]) {
                resources -= nums[i];
            } else {
                long long diff = nums[i] - resources;

                long long t = diff / k;
                if (diff % k != 0)
                    t++;

                totalOps += t;
                resources += t * 1LL * k;
                resources -= nums[i];
            }
        }

        long long a = totalOps;
        long long b = totalOps + 1;

        if (a % 2 == 0)
            a /= 2;
        else
            b /= 2;

        return (a % MOD) * (b % MOD) % MOD;
    }
};