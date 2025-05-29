class Solution {
 public:
  void reverseString(vector<char>& s) {
    int n = s.size();
    /*int start = 0;
    int en = n-1;
    while(start<en){            
        swap(s[start],s[en]);   //2 pointer approach 
        start++;
        en--;
    }*/
    reverse(s.begin(),s.end());         //direct strings approach
    //for(char ch:s){
       // cout<<ch<<" ";
    //}
    
  }
};