class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int>p;
      int c;
      int d=nums.size()/2;
      for(auto x:nums)
      {
        p[x]++;
      }
      for(auto x:p)
      {
          if(x.second>d)
          {
            c=x.first;
            d=x.second;
          }
      }
      return c;
    }
};
