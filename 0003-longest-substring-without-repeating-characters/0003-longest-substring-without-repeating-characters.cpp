class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0 , r = 0, maxLen = 0;
        unordered_set<char>st;
        while(r<s.size()){
            if(st.find(s[r])  == st.end()){
                st.insert(s[r]);
                maxLen = max(r-l+1,maxLen);
                r++;
            }
            else{
                st.erase(s[l]);
                l++;
            }

        }
        return maxLen;
    }
};