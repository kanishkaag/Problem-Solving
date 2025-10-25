class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);
        int maxCount = 0; // count of the most frequent char in the window
        int maxLen = 0;
        int i = 0;

        for (int j = 0; j < s.size(); j++) {
            count[s[j] - 'A']++;
            maxCount = max(maxCount, count[s[j] - 'A']);

            // If window size minus most frequent char count > k, shrink window
            while ((j - i + 1) - maxCount > k) {
                count[s[i] - 'A']--;
                i++;
            }

            maxLen = max(maxLen, j - i + 1);
        }
        return maxLen;
    }
};
