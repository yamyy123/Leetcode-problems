class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int p;
       int a=0;
       int sum=0;
       int chance=0;
       for(int i=0;i<nums.size();i++)
       {
           int count=0;
           int c=nums[a];
           for(int j=0;c!=0;j++)
           {
               p=c%10;
               count++;
               c=c/10;

           }
           if(count%2==0)
           {
             chance++;
           }
           a++;
       } 
       return chance;
    }
};
