#include <vector>
#include <cmath>
class Solution {
public:
    int nonSpecialCount(int l, int r) {
        auto sieve = [](int max) {
            std::vector<bool> is_prime(max + 1, true);
            is_prime[0] = is_prime[1] = false;
            for (int i = 2; i * i <= max; ++i) {
                if (is_prime[i]) {
                    for (int j = i * i; j <= max; j += i) {
                        is_prime[j] = false;
                    }
                }
            }
            std::vector<int> primes;
            for (int i = 2; i <= max; ++i) {
                if (is_prime[i]) {
                    primes.push_back(i);
                }
            }
            return primes;
        };
        int sqrt_r = static_cast<int>(sqrt(r));
        std::vector<int> primes = sieve(sqrt_r);
        int special_count = 0;
        for (int prime : primes) {
            int special_number = prime * prime;
            if (special_number >= l && special_number <= r) {
                ++special_count;
            }
        }
        int total_count = r - l + 1;
        return total_count - special_count;
    }
};
