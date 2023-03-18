class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int c=nums[0];
      int p=0;
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]>c)
          {
              c=nums[i];
              p=i;
          }
      }  
      return p;
    }
};
