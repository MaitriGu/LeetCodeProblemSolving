class Solution {
private:
    bool canPart(string &s,int idx,int target){
        if(idx==s.size())return target==0;
        int sum=0;
        for(int i=idx;i<s.size();i++){
            sum=sum*10+(s[i]-'0');
            if(sum>target)break;
            if(canPart(s,i+1,target-sum))return true;
        }
        return false;
    }
public:
    int punishmentNumber(int n) {
        int result=0;
        for(int i=1;i<=n;i++){
            int sq=i*i;
            string sqStr=to_string(sq);
            if(canPart(sqStr,0,i)){
                result+=sq;
            }
        }
        return result;
    }
};