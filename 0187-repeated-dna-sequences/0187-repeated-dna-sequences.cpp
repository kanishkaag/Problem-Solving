class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {

        // not in range
        if (s.length() < 10) return {};

        vector<string> ans;
        unordered_map<string, int> freq;
        
        // sliding window 10 size
        for (int i = 0; i <= s.length()-10; i++) {
            // make strin gof curr window
            string currSubstring = s.substr(i, 10);

            // inc freq
            freq[currSubstring]++;
        }


        for (auto &[subStr, freqSubstr] : freq) {
            // store repeated
            if (freqSubstr > 1) {
                ans.push_back(subStr);
            }
        }

        return ans;
    }
};