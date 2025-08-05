class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr=nums[0];
        int cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==curr)cnt++;
            else if(cnt==0){
                cnt=1;
                curr=nums[i];
            }
            else cnt--;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==curr)cnt++;
        }
        if(cnt>nums.size()/2)
        return curr;
        return curr;
    }
};