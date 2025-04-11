class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int result=0;
        for(int i=low;i<=high;i++){
           string temp=to_string(i);
           if(temp.size()==2 && i%11==0)result++;
           else if(temp.size()==4 && (((i/1000)+((i%1000)/100))==(((i%100)/10)+(i%10))))result++;
           else continue;
        }
        return result;
    }
};