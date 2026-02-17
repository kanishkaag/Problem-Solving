class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0;
        int len = 0;
        unordered_set<char> st;
      
        while(j < s.size()){
            if(st.find(s[j]) == st.end()){
                st.insert(s[j]);
                
                len = max(len , j-i+1);
                j++;
            }
            else{
                st.erase(s[i]);
                i++;
                
                //len = max(len , j-i+1);
            }
         

        }
        return len;
        
    }
};