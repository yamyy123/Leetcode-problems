class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>num1=nums;
         int i=nums.size();
        for( int k=0;k<i;k++)
        {
           nums.push_back(num1[k]);
        }
        return {nums};
    }
};
