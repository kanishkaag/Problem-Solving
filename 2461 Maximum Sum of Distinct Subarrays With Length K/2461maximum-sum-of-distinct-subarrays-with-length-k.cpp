class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
        long long result = 0;
        long long sum = 0;

        unordered_set<int> st;

        int i = 0, j = 0;

        while (j < n) {
            // If nums[j] is already in the current window nums[i...j], shrink the window
            while (st.count(nums[j])) {
                sum -= nums[i];    
                st.erase(nums[i]); 
                i++;               
            }

            sum += nums[j];          
            st.insert(nums[j]);      

            if (j - i + 1 == k) {
                result = max(result, sum); 
                sum -= nums[i];            
                st.erase(nums[i]);         
                i++;                       
            }

            j++; 
        }
        
        return result; 
    }
};

