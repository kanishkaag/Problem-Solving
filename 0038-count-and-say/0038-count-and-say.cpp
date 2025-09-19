class Solution {
public:
    string countAndSay(int n) {
        string answer = "1"; 
        string tempStore = ""; 
        int counter = 1;      
        int length;
        for (int i = 1; i < n; i++) { 
            length = answer.size();
            for (int j = 0; j < length - 1; j++) {
                if (answer[j] == answer[j + 1]) {
                    counter++;         
                }
                else {
                    tempStore += (char)(counter + '0'); 
                    tempStore += answer[j];             
                    counter = 1;                        
                }
            }
            tempStore += (char)(counter + '0');
            tempStore += answer[length - 1];
            answer = tempStore; 
            tempStore = "";     
            counter = 1;        
        }
        return answer;
    }
};