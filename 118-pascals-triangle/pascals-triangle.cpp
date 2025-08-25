class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=1;i<=numRows;i++){
            result.push_back(genRow(i));
        }
        return result;
    }
    vector<int> genRow(int row){
        vector<int>temp;
        temp.push_back(1);
        int ans=1;
        for(int i=1;i<row;i++){
            ans*=(row-i);
            ans/=(i);
            temp.push_back(ans);
        }
        return temp;
    }
};