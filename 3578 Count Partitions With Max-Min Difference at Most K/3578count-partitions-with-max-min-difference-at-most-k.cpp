class Solution {
public:
    int countPartitions(vector<int>& nums, int k) {
        const int MOD = 1e9 + 7;
        int n = nums.size();
        vector<int> dp(n + 1, 0);
        dp[0] = 1;

        vector<int> doranisvek = nums;

        deque<int> minq, maxq;
        int left = 0;
        int sum = 0;

        vector<int> prefix(n + 1, 0);
        prefix[0] = 1;

        for (int right = 0; right < n; ++right) {
            // Maintain the min queue
            while (!minq.empty() && nums[minq.back()] >= nums[right])
                minq.pop_back();
            minq.push_back(right);

            // Maintain the max queue
            while (!maxq.empty() && nums[maxq.back()] <= nums[right])
                maxq.pop_back();
            maxq.push_back(right);

            // Shrink window from the left while max - min > k
            while (nums[maxq.front()] - nums[minq.front()] > k) {
                if (minq.front() == left)
                    minq.pop_front();
                if (maxq.front() == left)
                    maxq.pop_front();
                ++left;
            }

            // dp[right+1] = sum of dp[left..right]
            dp[right + 1] =
                ((prefix[right] - (left > 0 ? prefix[left - 1] : 0)) % MOD +
                 MOD) %
                MOD;
            prefix[right + 1] = (prefix[right] + dp[right + 1]) % MOD;
        }

        return dp[n];
    }
};