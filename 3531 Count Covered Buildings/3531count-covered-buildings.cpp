class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
       unordered_map<int, set<int>> rowMap;
        
        unordered_map<int, set<int>> colMap;
        
        for (auto& b : buildings) {
            int x = b[0], y = b[1];
            rowMap[x].insert(y);
            colMap[y].insert(x);
        }
        
        int coveredCount = 0;
        
        for (auto& b : buildings) {
            int x = b[0], y = b[1];
            
            bool hasLeft = false, hasRight = false, hasAbove = false, hasBelow = false;
            
            
            auto& row = rowMap[x];
            auto it = row.lower_bound(y);
            if (it != row.begin()) hasLeft = true;
            it++;
            if (it != row.end()) hasRight = true;
            
            
            auto& col = colMap[y];
            it = col.lower_bound(x);
            if (it != col.begin()) hasAbove = true;
            it++;
            if (it != col.end()) hasBelow = true;
            
            if (hasLeft && hasRight && hasAbove && hasBelow) {
                coveredCount++;
            }
        }
        
        return coveredCount;
    }
};