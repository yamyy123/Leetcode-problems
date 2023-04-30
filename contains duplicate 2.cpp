class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      unordered_map<int,int>dup;
      for(int index=0;index<nums.size();index++)
      {
          if(dup.count(nums[index]))
          {
             if(abs(index-dup[nums[index]])<=k)
              {
                  return true;
              }
          }
           dup[nums[index]]=index;
      }
       return false;
    }
};
