class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0;
        long long sum2=0;
        long long zeroes1=0;
        long long zeroes2=0;
        for(int i:nums1){
            sum1+=i;
            if(i==0){
                sum1++;
                zeroes1++;
            }
        }
        for(int i:nums2){
            sum2+=i;
            if(i==0){
                sum2++;
                zeroes2++;
            }
        }
        if(!zeroes1 && sum2>sum1 || !zeroes2 && sum1>sum2)return -1;
        return max(sum1,sum2);
    }
};