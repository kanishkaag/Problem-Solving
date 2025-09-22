class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string ans ="";
        for(int i = 0;i<n;i++){
            if(
            (s[i]>= '0' && s[i]<= '9') || (tolower(s[i]) >= 'a'
            && tolower(s[i]) <= 'z')){
                ans += tolower(s[i]);
            } 
        }
        string fin = ans;
        reverse(ans.begin(),ans.end());
        if(fin == ans){
            return true;
        }
        else{
            return false;
        }
       
    }
};