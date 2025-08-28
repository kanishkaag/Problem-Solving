class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        int complement = 0;
        for(int i = 0;i<nums.size();i++){
            complement = target - nums[i];
            if(mpp.find(complement)!=mpp.end()){
                return {mpp[complement], i};
            }
            mpp[nums[i]] = i;
        }
        return {};


        // int sum;
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         sum = nums[i] + nums[j];
        //         if (sum == target) {
        //             return {i, j}; // Return the indices
        //         }
        //     }
        // }
        // return {}; // Return an empty vector if no solution is found (for safety)
        
    }
};