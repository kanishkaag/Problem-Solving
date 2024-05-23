class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        sort(candies.begin(), candies.end());

        int last_candy = -100001;
        int types = 0;
        for (auto candy: candies)
        {
            if (candy != last_candy)
                types++;
            last_candy = candy;
        }

        return min((int)candies.size() / 2, types);
    }
};