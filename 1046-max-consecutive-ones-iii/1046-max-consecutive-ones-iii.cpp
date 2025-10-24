class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0, maxLen = 0, zeroCount = 0;
        while(j < nums.size()){
            if(nums[j] == 0) zeroCount++;
            while(zeroCount > k){
                if(nums[i] == 0){
                    zeroCount--;
                }
                i++;
            }
            maxLen = max(j-i+1,maxLen);
            j++;
        }
        return maxLen;
    }
};