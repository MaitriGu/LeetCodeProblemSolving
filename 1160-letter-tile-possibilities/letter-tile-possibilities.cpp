class Solution {
public:
    int numTilePossibilities(string tiles) {
        int charCount[26]={0};
        for(char c:tiles){
            charCount[c-'A']++;
        }
        return findSeq(charCount);
    }
private:
    int findSeq(int charCount[26]){
        int totCount=0;
        for(int i=0;i<26;i++){
            if(charCount[i]==0)continue;
            totCount++;
            charCount[i]--;
            totCount+=findSeq(charCount);
            charCount[i]++;
        }
        return totCount;
    }
};