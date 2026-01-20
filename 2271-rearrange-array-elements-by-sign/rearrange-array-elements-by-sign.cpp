class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int neg=1;
        int pos=0;
        vector<int>result(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                result[neg]=nums[i];
                neg+=2;
            }
            else{
                result[pos]=nums[i];
                pos+=2;
            }
        }
        return result;
    }
};