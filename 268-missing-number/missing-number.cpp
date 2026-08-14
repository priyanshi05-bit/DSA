class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int act_sum=0;
        int n = nums.size();
        for (int i=0;i<n;i++)
        {
            act_sum += nums[i];
        }
        int exp_sum = n*(n+1)/2;

        return exp_sum -act_sum;
    }
};