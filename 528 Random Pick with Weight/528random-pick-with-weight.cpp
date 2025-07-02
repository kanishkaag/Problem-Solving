class Solution {
private:
    vector<int> prefix;
    int total = 0;
public:
    Solution(vector<int>& w) {
        int n = w.size();
        prefix.assign(n , 0);
        for(int i = 0; i < n; ++i){
            total += w[i];
            prefix[i] = total;
        }
    }
    int pickIndex() {
        int random = rand() % total + 1;
        return lower_bound(prefix.begin() , prefix.end() , random) - prefix.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */