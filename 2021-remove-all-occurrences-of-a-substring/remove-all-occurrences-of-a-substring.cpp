class Solution {
public:
    string removeOccurrences(string s, string part) {
       string result;
       int partl=part.size();
       for(char ch:s){
        result.push_back(ch);
        if(result.size()>=partl && result.substr(result.size()-partl)==part){
            result.erase(result.size()-partl);
        }
       } 
       return result;
    }
};