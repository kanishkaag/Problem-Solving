class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1;
        int end = arr.size() - 2;
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                return mid;

            else if (arr[mid] > arr[mid - 1]) { // Present in leftcurve so we
                                                // need to search in righthalf
                st = mid + 1;
            } else { // search in left half
                end = mid - 1;
            }
        }
        return -1;
    }
};