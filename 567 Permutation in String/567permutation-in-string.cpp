class Solution {
public:

    bool isFreqSame(int freq1[],int freq2[]){
        for(int i =0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freqS1[26] = {0};
        for(int i = 0;i<s1.length();i++){
            int index = s1[i] - 'a'; // for a index will come 0 ,b -> 1,c -> 2                     
            freqS1[index] = freqS1[index]+1;
        }
        int windSize = s1.length();
        for(int i = 0;i<s2.length();i++){
            int windIdx = 0, idx = i; //idx is the original index
            int windFreq[26] = {0};
            while(windIdx < windSize && idx < s2.length()){
                windFreq[s2[idx]-'a']++;
                windIdx++; idx++;
            }
            if(isFreqSame(freqS1,windFreq)){ //found permutation
                return true;
            }
        }
        return false;

    }
};