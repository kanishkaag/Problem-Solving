class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '(' || s[i] ==  '{' || s[i] ==  '['){//case of opening
                st.push(s[i]);
            }
            else{//closing bracket case

                //edge case when we have more no. of closing bracket then opening
                if(st.size()==0){
                    return false;
                }
                //we are checking if we are getting an exact match or not

                if(st.top() == '(' && s[i] == ')' ||
                   st.top() == '{' && s[i] == '}' ||
                   st.top() == '[' && s[i] == ']' )
                   {
                     st.pop();
                   }
                else{//No match founds
                return false;
                }   
            }
        }
        //if stack is empty then valid which is below 
    return st.size() == 0;    
    }
};