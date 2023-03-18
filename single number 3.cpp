class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      vector<int>k;
      map<int,int>m;
      for(auto x:nums)
      {
          m[x]++;
      }  
      for(auto y:m)
      {
        if(y.second==1)
        {
            k.push_back(y.first);
        }
      }
      return {k};
    }
};
