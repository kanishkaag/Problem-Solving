class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans(arr.size(),-1);
        int maxi=-1;
        for(int i=arr.size()-1;i>=0;i--)
        {
            int curr= arr[i];
            ans[i]=maxi;
            maxi=max(maxi,curr);
        }
 
    return ans;
    }
};