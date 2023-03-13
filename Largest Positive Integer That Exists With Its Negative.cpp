class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int positive=-1;
        sort(nums.begin(),nums.end());
     for(int i=nums.size()-1;i>=0;i--)
     {
         if(nums[i]>0)
         {
             int c=-1*nums[i];
             for(int j=0;j<nums.size();j++)
             {
                 if(c==nums[j])
                 {
                     return nums[i];
                 }
             }
         }
     }  
     return -1;
    }
};
