class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> freq; // fruit -> count
        int i = 0, maxLen = 0;

        for (int j = 0; j < fruits.size(); j++) {
            freq[fruits[j]]++;  // add current fruit

            // shrink window if more than 2 types
            while (freq.size() > 2) {
                freq[fruits[i]]--;
                if (freq[fruits[i]] == 0) {
                    freq.erase(fruits[i]);
                }
                i++;
            }

            maxLen = max(maxLen, j - i + 1);
        }

        return maxLen;
    }
};
