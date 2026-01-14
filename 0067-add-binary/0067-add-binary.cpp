class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size();
        int m = b.size();
        int carry = 0;
        string result = "";
        if (n < m) {
            // Whatever is written on the LEFT of + appears on the LEFT in the
            // final string.
            a = string(m - n, '0') + a;
        } else if (n > m) {
            b = string(n - m, '0') + b;
        }
        n = a.size();
        for (int i = n - 1; i >= 0; i--) {
            int bitA = a[i] - '0';
            int bitB = b[i] - '0';

            int sum = bitA + bitB + carry;
            result = char((sum % 2) + '0') + result;
            carry = sum / 2;
        }
        if (carry) {
            result = '1' + result;
        }
        return result;
    }
};