class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.length();

        if (n == 0 or n < k)
            return 0;

        if (k <= 1)
            return n;

        unordered_map<char, int> count;
        for (char c : s)
            count[c]++;

        int left = 0;

        while (left < n && count[s[left]] >= k)
            left++;
        if (left >= n - 1)
            return left;

        int len1 = longestSubstring(s.substr(0, left), k);

        while (left < n && count[s[left]] < k)
            left++;

        int len2 = left < n ? longestSubstring(s.substr(left), k) : 0;

        return max(len1, len2);
    }
};