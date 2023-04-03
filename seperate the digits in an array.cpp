class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
       vector<int>answer;
       for(int i=nums.size()-1;i>=0;i--)
       {
          int c=nums[i];
          for(int j=0;c!=0;j++)
          {
             answer.push_back(c%10);
             c=c/10;
          }
       } 
       reverse(answer.begin(),answer.end());
      return {answer};
    }
};
