class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int>num;
        for(auto i:nums){
            if(i<k)return -1;
            else if(i>k)num.insert(i);
        }
        return num.size();
    }
};