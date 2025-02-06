class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                freq[nums[i] * nums[j]]++;
            }
        }
        for (auto it : freq) {
            int c = it.second;
            result += (c * (c - 1)) / 2 * 8;
        } 
        return result;
    }
};
