class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.empty()) return 0;
        int max_inc = 1, max_dec = 1; 
        int final_result = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                max_inc++;
                max_dec = 1; 
            } 
            else if (nums[i] < nums[i - 1]) {
                max_dec++;
                max_inc = 1; 
            } 
            else {
                max_inc = 1;
                max_dec = 1;
            }
            final_result = max(final_result, max(max_inc, max_dec));
        }
        return final_result;
    }
};
