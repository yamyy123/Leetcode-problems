class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        for(int i=1;i<word1.size();i++){
            word1[0].append(word1[i]);
           
        }
        for(int j=1;j<word2.size();j++){
             word2[0].append(word2[j]);
        }
        if(word1[0]==word2[0]){
            return true;
        }
        return false;
        
    }
};
