class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1; int last = -1;
        int st = 0 ,end = nums.size()-1;
        //finding first
        while(st<=end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                first = mid;
                end = mid - 1;
            }
            else if(nums[mid]<target){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        //finding second 
         st = 0, end = nums.size()-1;
        while(st<=end){
            int mid = st + (end - st)/2;

            if(nums[mid] == target){
                last = mid;
                st = mid + 1;

            }
            else if(nums[mid]<target){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        vector<int> arr(2);
        arr[0] = first;
        arr[1] = last;
        return arr;
    }
};