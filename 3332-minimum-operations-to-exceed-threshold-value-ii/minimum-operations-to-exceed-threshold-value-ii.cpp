class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long int,vector<long long int>,greater<long long int>>pq(nums.begin(),nums.end());
        int numOp=0;
        while(pq.size()>=2){
            long long int num1=pq.top();
            if(num1>=k)break;
            pq.pop();
            long long int  num2=pq.top();
            pq.pop();
            long long int r=min(num1,num2)*2+max(num1,num2);
            pq.push(r);
            numOp++;
            }
            return numOp;
    }
};