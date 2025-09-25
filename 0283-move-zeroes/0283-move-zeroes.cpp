class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; // j keeps track of the next position for a non-zero element

        // Loop through all elements in the array
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                // Swap only if i and j are different, to avoid unnecessary operations
                if (i != j) {
                    swap(nums[i], nums[j]);
                }
                j++; // Move j to the next position
            }
        }
    }
};
