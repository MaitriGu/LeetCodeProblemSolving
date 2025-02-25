#define mod 1000000007
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long sum = 0;
        long long evenS = 1;
        long long oddS = 0;
        long long result = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (sum % 2 == 0) {
                result = (result + oddS) % mod;
                evenS = (evenS + 1) % mod;
            } else {
                result = (result + evenS) % mod;
                oddS = (oddS + 1) % mod;
            }
        }
        return (int)(result % mod);
    }
};
