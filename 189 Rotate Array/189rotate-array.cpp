class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int N = nums.size();
        k = k%N;
        vector<int>temp(nums.end()-k , nums.end());
        for(int i = N-1-k;i>=0;i--){
            nums[i+k] = nums[i];
        }
        for(int i = 0;i<k;i++){
            nums[i] = temp[i];
        }
    }
};