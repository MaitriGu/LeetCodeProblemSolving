class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n =nums.size();
        int low=0;
        int high=n-1;
        bool idx = false;
        while(low <= high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                idx=true;
                return idx;
            }
            if(nums[mid] == nums[low] && nums[mid] == nums[high]){
                low++;
                high--;
                continue;
            }
            //left side sorted
            else if(nums[low]<= nums[mid]){
                if(nums[low] <= target && nums[mid] >= target){
                    high=mid-1;
                }
                else low=mid+1;
            }
            else{
                if(nums[mid] <= target && nums[high] >= target){
                    low=mid+1;
                }
                else high=mid-1;
            }
        }
        return idx;
    }
};