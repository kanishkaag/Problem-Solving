class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> help;
        for (int i = n - k; i < n; i++) {
            help.push_back(nums[i]);
        }
        for (int i = 0; i < n - k; i++) {
            help.push_back(nums[i]);
        }
        nums = help;
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i];
        }
    }
};