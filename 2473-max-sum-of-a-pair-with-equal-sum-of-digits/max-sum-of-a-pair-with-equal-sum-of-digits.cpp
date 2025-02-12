class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, priority_queue<int>> sumFreq;
        int maxi = -1;
        for (int num : nums) {
            int digitSum = sumDig(num);
            if (sumFreq[digitSum].size() >= 1) {
                int firstMax = sumFreq[digitSum].top();
                maxi = max(maxi, firstMax + num);
            }
            sumFreq[digitSum].push(num);
        }
        return maxi;
    }
private:
    int sumDig(int n ){
        int sum=0;
        while(n!=0){
            int r=n%10;
            sum+=r;
            n=n/10;
        }
        return sum;
    }
};