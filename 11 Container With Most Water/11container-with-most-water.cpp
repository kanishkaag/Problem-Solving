class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea = 0;
        //Brute Force Approach - TLE
        /*for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int area = min(height[i],height[j])*(j-i);
                 maxArea = max(maxArea,area);
            }     
            }
            return maxArea;*/
            int left = 0;
            int right = n-1;
            while(left<right){
                int h = min(height[left],height[right]);
                int b = right - left;
                maxArea = max(maxArea, h*b);
                if(height[left]<height[right]) 
                    left++;
                else
                    right--;
            }
    return maxArea;
    }
};