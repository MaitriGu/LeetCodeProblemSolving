class Solution {
private:
    bool genSeq(vector<int> & seq, vector<bool> & vis,int idx,int n){
        if(idx==seq.size()) return true;
        if(seq[idx]!=0) return genSeq(seq,vis,idx+1,n);
        for(int num=n;num>=1;num--){
            int nextIdx=(num==1)?idx:idx+num;
            if(vis[num]||(num>1 &&(nextIdx >=seq.size()|| seq[nextIdx]!=0))) continue;
            seq[idx]=seq[nextIdx]=num;
            vis[num]=true;
            if(genSeq(seq,vis,idx+1,n)) return true;
            seq[idx]=seq[nextIdx]=0;
            vis[num]=false;
        }
        return false;
    }
public:
    vector<int> constructDistancedSequence(int n) {
        vector<int> seq(2*n-1,0);
        vector<bool> vis(n+1,false);
        genSeq(seq,vis,0,n);
        return seq;
    }
};