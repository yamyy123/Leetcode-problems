class Solution {
public:
    int thirdMax(vector<int>& nums) {
      set<int>p(nums.begin(),nums.end());
      nums.clear();
      for(auto x:p)
      {
        nums.push_back(x);
      }
      sort(nums.begin(),nums.end(),greater<int>());
      int c;
      int d;
      if(nums.size()<3)
      {
        return nums[0];
      }
      else
      {
      c=3;
      }
      for(int i=0;i<c;i++)
      {
         d=nums[i];
      }
      return d;
    }
};
