class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> dp = {0, INT_MIN, INT_MIN};

        for (int x : nums) {
            vector<int> next = dp;

            for (int r = 0; r < 3; r++) {
                if (dp[r] != INT_MIN) {
                    int newSum = dp[r] + x;
                    int newRemainder = newSum % 3;
                    next[newRemainder] =
                        max(next[newRemainder], newSum);
                }
            }

            dp = next;
        }

        return dp[0];
    }
};