class Solution {
 public:
  int reverse(int x) {
    long ans = 0;
    int digit = 0;
    int n = x;
    while(x != 0){
        digit = x % 10;
        ans = (ans * 10) + digit;
        if (ans > INT_MAX || ans < INT_MIN) return 0;
        x = x / 10;
    }
   return ans;

    // while (x != 0) {
    //   ans = ans * 10 + x % 10;
    //   x /= 10;
    // }

    // return (ans < INT_MIN || ans > INT_MAX) ? 0 : ans;
  }
};