class Solution {
public:
    int singleNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int a;
       nums.push_back(0);
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]==nums[i+1])
          {
              i=i+2;
              continue;
          }
          if(nums[i]!=nums[i+1])
          {
              a=nums[i];
              break;
          }
      }
      return a;
    }
};
