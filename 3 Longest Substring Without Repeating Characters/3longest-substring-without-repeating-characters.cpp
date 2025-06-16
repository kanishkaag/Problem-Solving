class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0;
    int max_le = 0;
    unordered_set<char> st;
    while (j < s.size()) {
        int len = j - i + 1;
        if (st.find(s[j]) == st.end()) { 
            st.insert(s[j]);
            max_le = max(len , max_le);
            j++;
        } else { 
            st.erase(s[i]);
            i++;
        }
    }
    return max_le;
    }
};