class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        //BRUTE FORCE
        long long ans = 0;
        int maxE = INT_MIN;
        int minE = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int maxi = nums[i];
            int mini = nums[i];
            for (int j = i+1; j < nums.size(); j++) {
                maxi = max(maxi, nums[j]);
                mini = min(mini, nums[j]);
                ans += maxi - mini;
            }
        }
        return ans;
    }
};