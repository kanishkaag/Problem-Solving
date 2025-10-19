class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res, pos,neg;
        for(int i = 0;i< nums.size();i++){
            if(nums[i] > 0){
                pos.push_back(nums[i]);
            }
            else {
                neg.push_back(nums[i]);
            }
        }
        for(int j = 0; j<pos.size(); j++){
            res.push_back(pos[j]);
            res.push_back(neg[j]);
        }

    return res;
    }
};