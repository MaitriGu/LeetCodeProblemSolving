class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int result=nums[0];
        int final_result=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                result+=nums[i];
                final_result=max(final_result,result);
            }
            else result=nums[i];
        }
        return final_result;
    }
};