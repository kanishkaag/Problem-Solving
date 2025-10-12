class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxpro = nums[0];
        for(int i = 0;i<n;i++){
            int multiply = 1;
            for(int j = i;j<n;j++){
                multiply *= nums[j];
                maxpro = max(maxpro, multiply);
            }
        }
        return maxpro;
    }
};