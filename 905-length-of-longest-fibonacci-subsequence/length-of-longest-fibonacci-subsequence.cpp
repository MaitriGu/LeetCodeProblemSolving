class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n =arr.size();
        int result=0;
        vector<vector<int>> dp(n,vector<int>(n,2));
        for(int curr=2;curr<n;curr++){
            int left=0;
            int right=curr-1;
            while(left<right){
                int sum=arr[left]+arr[right];
                if(sum>arr[curr])right--;
                else if (sum<arr[curr])left++;
                else {
                    dp[right][curr]=dp[left][right]+1;
                    result=max(result,dp[right][curr]);
                    left++;
                    right--;
                }
            }
        }
        return result>2?result:0;
    }
};