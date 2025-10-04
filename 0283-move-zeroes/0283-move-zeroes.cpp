class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0;j<nums.size();j++){
            if(nums[j] != 0){
                //if(i!=j){ // just to prevent extra swapping at same place when i and j
                    swap(nums[j] , nums[i]);
                    i++;
                //}  
            }
        }
    }
};