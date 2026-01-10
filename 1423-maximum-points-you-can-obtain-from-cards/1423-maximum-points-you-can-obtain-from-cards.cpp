class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int rindex = n-1;
        int lsum = 0, rsum = 0, maxSum = 0;
        for(int i = 0; i<= k-1;i++){
            lsum = lsum + cardPoints[i];
        }
        maxSum = lsum;
        for(int i = k-1; i>=0; i--){
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[rindex];
            rindex--;
            maxSum = max(maxSum, lsum+rsum);
        }
        return maxSum;
    }
};