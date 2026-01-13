class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // vector<int> rangearr;
        // int missing = 0;
        sort(nums.begin(),nums.end());
        int n = nums.size(); //range - [0,n]
        // for(int i = 0;i<=n;i++){
        //     rangearr.push_back(i);
        // }
        // for(int i = 0;i<=n;i++){
        //     if(nums[i] != rangearr[i]){
        //         missing = rangearr[i];
        //     }
        // }
        for(int i = 0; i<n;i++){
            if(nums[i] != i){
                return i;
          }
        
        }
        return n;
    }
};