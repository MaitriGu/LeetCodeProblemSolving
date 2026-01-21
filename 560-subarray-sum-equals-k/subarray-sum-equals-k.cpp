class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     int n = nums.size();
        if (n == 1) {
            return (nums[0] == k) ? 1 : 0;
        }
        unordered_map<int, int> dp;
        int output = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if(sum==k)output++;
            if (dp.find(sum - k) != dp.end()) {
                output=output + dp[sum-k];
            }
             dp[sum]++;
        }

        return output;
    }
};