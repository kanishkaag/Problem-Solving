class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int total_sum = 0;
        int sum_single_digits = 0;
        int sum_double_digits = 0;
        for (int num : nums) {
            total_sum += num;
            if (num >= 1 && num <= 9) {
                sum_single_digits += num;
            } else if (num >= 10 && num <= 99) {
                sum_double_digits += num;
            }
        }
        int sum_Bob_if_Alice_takes_singles = total_sum - sum_single_digits;
        int sum_Bob_if_Alice_takes_doubles = total_sum - sum_double_digits;
        return sum_single_digits > sum_Bob_if_Alice_takes_singles || sum_double_digits > sum_Bob_if_Alice_takes_doubles;
    }
};
