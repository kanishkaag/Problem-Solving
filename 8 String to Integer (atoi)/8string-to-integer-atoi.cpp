class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
int signMultiplier = 1;
long accumulatedValue = 0; 


while (i < s.size() && s[i] == ' ') {
    i++;
}
if (i == s.size()) return 0;


if (s[i] == '-') {
    signMultiplier = -1;
    i++;
} else if (s[i] == '+') {
    i++;
}


while (i < s.size() && isdigit(s[i])) {
    accumulatedValue = accumulatedValue * 10 + (s[i] - '0');

  
    if (signMultiplier * accumulatedValue > INT_MAX) return INT_MAX;
    if (signMultiplier * accumulatedValue < INT_MIN) return INT_MIN;

    i++;
}

return (int)(signMultiplier * accumulatedValue);

    }
};