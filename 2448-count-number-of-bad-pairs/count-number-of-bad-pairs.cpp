class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
      long long bad=0;
      unordered_map<int,int> diffFreq;
      for(int i=0;i<nums.size();i++){
        int diff=i-nums[i];
        int good=diffFreq[diff];
        bad+=i-good;
        diffFreq[diff]++;
      } 
      return bad;
    }
};