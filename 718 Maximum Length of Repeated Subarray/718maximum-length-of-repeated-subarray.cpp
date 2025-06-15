class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        //Brute force which is giving TLE
        /*int a = nums1.size(),b = nums2.size(),ans = 0;
        for(int i = 0;i<a;i++){
            for(int j = 0;j<b;j++){
                int leng = 0;
                while(i + leng < a and j + leng <b and nums1[i+leng] == nums2[j+leng]){
                    leng++;
                }
                ans = max(ans, leng);
            }
        }
        return ans;
        */
    int a = nums1.size(), b = nums2.size(), ans = 0;
    vector<int> dp(b + 1, 0), prev(b + 1, 0);

    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= b; j++) {
            if (nums1[i-1] == nums2[j-1]) {
                dp[j] = prev[j-1] + 1;
                ans = max(ans, dp[j]);
            } else {
                dp[j] = 0;
            }
        }
        swap(dp, prev);
    }
    return ans;

    }
};