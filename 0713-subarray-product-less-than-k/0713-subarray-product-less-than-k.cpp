class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         if (k <= 1) return 0; 

        int n = nums.size();
        long long product = 1;
        int l = 0, count = 0;

        for (int r = 0; r < n; r++) {
            product *= nums[r];

            while (product >= k && l <= r) {
                product /= nums[l];
                l++;
            }

            count += (r-l+1);
        }

        return count;
    }
};