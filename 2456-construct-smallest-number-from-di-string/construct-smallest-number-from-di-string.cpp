class Solution {
private:
    bool backtrack(const string & pattern,int index,string & curr,unordered_set<char> &vis,string & result){
        if(curr.size()==pattern.size()+1){
            result=curr;
            return true;
        }
        for(char dig='1';dig<='9';dig++){
            if(vis.count(dig))continue;
            if(!curr.empty()&& ((pattern[index-1]=='I' && curr.back()>=dig)||(pattern[index-1]=='D'&& curr.back()<=dig))){
                continue;
            }
            curr+=dig;
            vis.insert(dig);
            if(backtrack(pattern,index+1,curr,vis,result))return true;
            vis.erase(dig);
            curr.pop_back();
        }
        return false;
    }
public:
    string smallestNumber(string pattern) {
      string result,curr;
      unordered_set<char>vis;
      backtrack(pattern,0,curr,vis,result);
      return result;
    }
};