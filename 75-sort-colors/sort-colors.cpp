class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){                                //to be kept in mind that we traversing mid throughout
            if(nums[mid]==0){                            // 0-low-1      ----   0
                swap(nums[mid],nums[low]);               // low-mid-1    ----   1
                low++;                                   // mid-high-1   ----   0/1/2
                mid++;                                   // high-n-1     ----   2
            }
            else if(nums[mid]==1){
                mid++;
            }
            else {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};