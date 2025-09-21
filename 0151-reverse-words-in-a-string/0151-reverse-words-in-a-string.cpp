class Solution {
public:
    string reverseWords(string s) {
         
        reverse(s.begin(),s.end());
        string ans = "";
        int n = s.size();
        for(int i = 0;i<n;i++){
            string word = "";
            while(i<n && s[i]!=' '){
                word += s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0){// we use this condition if like 2nd testcase we hv spaces 
            //intially then word.len will also count spaces when while loop also not run
                ans+=' '+ word;
            }
            
        }
        return ans.substr(1);
    }
};