class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      vector<int>k;
      for(auto x:nums)
      {
          int count=0;
          for(auto y:nums)
          {
              if(x==y)
              {
                  continue;
              }
              if(x>y)
              {
                  count++;
              }
          }
          k.push_back(count);
      }
      return {k};
    }
};
