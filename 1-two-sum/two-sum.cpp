class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j=0;
        unordered_map<int ,int>preSum;
        for(int k=0;k<nums.size();k++){
            int num=nums[k];
            int more=target-num;
            if(preSum.find(more)!=preSum.end()){
                i=preSum[more];
                j=k;
                return {i,j};
            }
            preSum[num]=k;
        }
        return {i,j};
    }
};