class Solution {
public:
    int findGCD(vector<int>& nums) {
      int max=INT_MIN;
      int min=INT_MAX;
      int gcd=1;
       for(int i=0;i<nums.size();i++)
       {
          if(nums[i]>max)
          {
              max=nums[i];
          }
           if(nums[i]<min)
          {
              min=nums[i];
          }
       } 
       for(int i=1;i<=min;i++)
       {
           if((max%i==0)&&(min%i==0))
           {
               gcd=i;
           }
       }
       return gcd;
    }
};
