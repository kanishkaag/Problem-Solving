class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int n = nums.size(); // range - [0,n]
        // for (int i = 0; i < n; i++) {
        //     if (nums[i] != i) {
        //         return i;
        //     }
        // }
        // return n;

        //range based formula approach
        int n = nums.size();
        int total = n*(n + 1) / 2;
        int sum = 0;

        for (int x : nums) {
            sum += x;
        }
        return total - sum;
    }
};