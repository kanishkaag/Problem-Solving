class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n, -1); // initially assume no greater element

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < i + n; j++) { // circular traversal
                int index = j % n;                // wrap around using modulo
                if (nums[index] > nums[i]) {      // found next greater
                    nge[i] = nums[index];
                    break; // stop after finding first greater
                }
            }
        }
        return nge;
    }
};
