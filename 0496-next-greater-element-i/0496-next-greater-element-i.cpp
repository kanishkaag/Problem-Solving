class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
            int val = nums1[i];
            int nextGreater = -1;
            for(int j = 0; j < nums2.size(); j++){
                if(nums2[j] == val){

                    for (int k = j + 1; k < nums2.size(); k++) {
                        if (nums2[k] > val) {
                            nextGreater = nums2[k];
                            break;
                        }
                    }
                    break; // Stop searching once found in nums2
                }
            }

            ans.push_back(nextGreater);
        }
        return ans;

                    // if(j + 1 < nums2.size() && nums2[j] < nums2[j + 1]){
                    //     ans.push_back(nums2[j+1]);
                    // }
                    // else{
                    //     ans.push_back(-1);   
    }
};