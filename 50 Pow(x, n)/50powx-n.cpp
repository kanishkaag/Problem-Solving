class Solution {
public:
    double myPow(double x, int n) {
      if (n == 0) return 1.0;

    long long N = n; 
    if (N < 0) {
        x = 1 / x;
        N = -N;
    }

    if (N % 2 == 0) {
        return myPow(x * x, N / 2);
    } else {
        return x * myPow(x * x, (N - 1) / 2);
    }
    }
};