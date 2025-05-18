class Solution {
public:
    int minDeletion(string s, int k) {
         unordered_map<char, int> freq;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (freq.find(c) != freq.end()) {
            freq[c]++;
        } else {
            freq[c] = 1;
        }
    }

    int distinct = freq.size();
        
    if (distinct <= k) return 0;

    vector<int> freqList;
    unordered_map<char, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); it++) {
        freqList.push_back(it->second);
    }
    sort(freqList.begin(), freqList.end());

    int deletions = 0;
    int toRemove = distinct - k;

    
    for (int i = 0; i < toRemove; i++) {
        deletions += freqList[i];
    }

    return deletions;
    }
};