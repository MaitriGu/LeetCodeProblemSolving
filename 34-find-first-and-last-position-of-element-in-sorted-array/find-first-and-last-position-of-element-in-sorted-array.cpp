class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstOcc= first(nums,target);
        int lastOcc=last(nums,target);
        return {firstOcc,lastOcc};
    }
    int first(vector<int>& nums,int target){
        int n=nums.size();
        int low=0;
        int high=n-1;
        int firstt=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                firstt=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else high=mid-1;
        }
        return firstt;
    }
    int last(vector<int>& nums,int target){
        int n=nums.size();
        int low=0;
        int high=n-1;
        int lastt=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                lastt=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else low=mid+1;
        }
        return lastt;
    }
};