class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int x = -1;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1]){
                x = i-1;
            }
        }
        if(x == -1){
            sort(nums.begin(), nums.end());
        }else{
            int inc = 0; 
            int diff = INT_MAX;
            for(int i=x+1;i<n;i++){
                if(nums[i] > nums[x] && (nums[i] - nums[x] < diff)){
                    diff = nums[i] - nums[x];
                    inc = i;
                }
            }
            swap(nums[inc], nums[x]);
            sort(nums.begin() + x + 1, nums.end());
            
        }
    }
};