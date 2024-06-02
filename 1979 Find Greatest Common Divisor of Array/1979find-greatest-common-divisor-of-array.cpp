class Solution {
public:
    int findGCD(vector<int>& arr) {
        int n = arr.size();
        int mn = INT_MAX;
        int mx = INT_MIN;
        
        for(int i=0; i<n; i++)
        {
            mn = min(mn, arr[i]);
            mx = max(mx, arr[i]);
        }
        int ans;
        for(int i=1; i<=mx; i++)
        {
            if(mx%i == 0 && mn%i == 0)
            {
                ans = i;
            }
        }
        return ans;
    }
};