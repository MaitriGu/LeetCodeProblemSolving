class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>freq;
        int result=0;
        for(auto ans:answers){
            freq[ans]++;
        }
        for(auto& f:freq){
           int gsize=f.first+1;
           int groups=ceil((double)f.second/gsize);
           result+=groups*gsize;
        }
        return result;
    }
};