class Solution {
public:
    int numTilings(int n) {
        int mod=1e9+7;
        vector<long long>ways(1001,0);
        ways[1]=1;
        ways[2]=2;
        ways[3]=5;
        if(n<=3)return ways[n];
        else{
            for(int i=4;i<=n;i++){
                ways[i]=2*ways[i-1]+ways[i-3];
                ways[i]%=mod;
            }
        }
        return ways[n];
    }
};