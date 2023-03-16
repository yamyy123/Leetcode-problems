class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      vector<bool>result;
      int c=*max_element(candies.begin(),candies.end());
      for(int i=0;i<candies.size();i++)  
      {
          if(candies[i]+extraCandies>=c)
          {
              result.push_back(1);
          }
          else
          {
              result.push_back(0);
          }
      }
      return {result};
    }
};
