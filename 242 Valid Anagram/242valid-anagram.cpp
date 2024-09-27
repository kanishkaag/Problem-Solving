class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;//if lengths of both the strings are different ,it cannot be anagram
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
         return s == t;
        
    }
};