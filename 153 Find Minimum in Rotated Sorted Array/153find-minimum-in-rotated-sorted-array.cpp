class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1, min = nums[0];
        
        while (left <= right) {
            int mid = (left + right) / 2;

            if (nums[mid] >= min) {
                left = mid + 1;
            } else if (nums[mid] < min) {
                right = mid - 1;
                min = nums[mid];
            }
        }

        return min;
    }
};