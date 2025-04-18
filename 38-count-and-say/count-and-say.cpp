class Solution {
public:
    string RLE(string s){
        char ch=s[0];
        int count=1;
        int i=1;
        int n =s.size();
        string result="";
        while(i<n){
            if(s[i]==ch){
                count++;
            }
            else{
                result+=to_string(count);
                result+=ch;
                count=1;
                ch=s[i];
            }
            i++;
        }
        result+=to_string(count);
        result+=ch;
        return result;
    }
    string countAndSay(int n) {
        string s="1";
        for(int i=1;i<n;i++){
            s=RLE(s);
        }
        return s;
    }
};