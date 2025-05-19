class Solution {
public:
    string largestNumberBucketSort(vector<int>& nums) {
        vector<string> strs;
        for (int num : nums)
            strs.push_back(to_string(num));
        
        sort(strs.begin(), strs.end());

        string maxStr = "";
        do {
            string current = "";
            for (string& s : strs)
                current += s;
            if (current > maxStr)
                maxStr = current;
        } while (next_permutation(strs.begin(), strs.end()));
        
        return maxStr;
    }

    // ✅ 2. Better: Sort with custom comparator
    static bool compare(const string &a, const string &b) {
        return a + b > b + a;
    }

    string largestNumberBetter(vector<int>& nums) {
        vector<string> strs;
        for (int num : nums)
            strs.push_back(to_string(num));
        
        sort(strs.begin(), strs.end(), compare);

        if (strs[0] == "0")
            return "0";

        string result = "";
        for (string& s : strs)
            result += s;

        return result;
    }

    // ✅ 3. Optimized: Same logic, cleaner & uses ostringstream
    static bool customCompare(const string &a, const string &b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> strs;
        for (int num : nums)
            strs.push_back(to_string(num));

        sort(strs.begin(), strs.end(), customCompare);

        if (strs[0] == "0")
            return "0";

        ostringstream oss;
        for (string& s : strs)
            oss << s;

        return oss.str();
    }
};