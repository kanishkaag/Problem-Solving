class Solution {
public:
    int firstUniqChar(string s) {
        // //Brute Force
        // for(int i = 0;i<s.size();i++){
        //     int count = 0;
        //     for(int j = 0;j<s.size();j++){
        //         if(i != j && s[i] == s[j]){
        //             count = 1;
        //             break;
        //         }
        //     }
        //     if(count == 0) return i;
        //     }
        // return -1;   

        //Optimized
        
        unordered_map<char,int>mpp;
        queue<int> q; //in queue i will store the index of char as i have 
                      //to   return that in ans

        for(int i = 0;i<s.size();i++){
            //If a character is not find in the map then add in map as well 
            //as queue
            if(mpp.find(s[i]) == mpp.end()){
                q.push(i);
            }
             mpp[s[i]]++;    //in map increasing the frequency
             
            //now we have to remove repeating character from queue
            while(q.size()>0 &&  mpp[s[q.front()]]>1){
                q.pop();
            }
        }
        return q.empty() ? -1: q.front();

        }
        
};