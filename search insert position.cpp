class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,j,a;
        for( i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
               return i;
               
            }
            
        }
       
       for(j=0;j<nums.size();j++)
       {
           if(nums[j]>target)
           {
               a= j; 
               return a;
           }
       }
       return i;
    }
};
