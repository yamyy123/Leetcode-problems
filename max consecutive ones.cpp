class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     vector<int>p;
      int count=0;
      int maxcount=0;
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]==1)
          {
              count++;
          }
          else
          {
             p.push_back(count);
             count=0;
          }    
      }  
      p.push_back(count);
     for(auto x:p)
     {
         if(x>maxcount)
         {
             maxcount=x;
         }
     }
     return maxcount;
    }
};
