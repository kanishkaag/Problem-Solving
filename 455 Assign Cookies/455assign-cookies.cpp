class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    int gl = g.size();
    int sl = s.size();
    int i = 0, j = 0;
    int count=0;
    sort(g.begin(), g.end());       
    sort(s.begin(), s.end());
    while(i < gl && j < sl){     
        if(s[j] >= g[i]){             
            count++;                 
            j++;                        
            i++;                       
            continue;
        }
        j++;          
    }
    return count;
    }
};