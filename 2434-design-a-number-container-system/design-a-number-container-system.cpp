class NumberContainers {
public:
    NumberContainers() {
    }
    
    void change(int index, int number) {
       if(idxToNum.find(index)!=idxToNum.end()){
        int prev=idxToNum[index];
        numToIdx[prev].erase(index);
        if(numToIdx[prev].empty())numToIdx.erase(prev);
       } 
       idxToNum[index]=number;
       numToIdx[number].insert(index);
    }
    
    int find(int number) {
        if(numToIdx.find(number)!=numToIdx.end()){
            return *numToIdx[number].begin();
        }
        return -1;
    }
private:
    unordered_map<int,set<int>>numToIdx;
    unordered_map<int,int>idxToNum;
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */