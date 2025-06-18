class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_cons = 0, count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                max_cons = max(max_cons, count);
            } else {
                count = 0;
            }
        }

        return max_cons;
    }
};