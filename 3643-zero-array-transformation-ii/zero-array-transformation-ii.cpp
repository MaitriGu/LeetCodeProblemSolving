class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int sum = 0;
        int k = 0;
        vector<int> differenceArray(n + 1);
        for (int index = 0; index < n; index++) {
            while (sum + differenceArray[index] < nums[index]) {
                k++;
                if (k > queries.size()) {
                    return -1;
                }
                int left = queries[k - 1][0];
                int right = queries[k - 1][1];
                int val = queries[k - 1][2];
                if (right >= index) {
                    differenceArray[max(left, index)] += val;
                    differenceArray[right + 1] -= val;
                }
            }
            sum += differenceArray[index];
        }
        return k;
    }
};