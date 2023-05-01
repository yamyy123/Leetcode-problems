class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
     int a=INT_MAX;
     int b=INT_MIN;
     for(auto i:nums)
     {
       if(i>0)
       {
         a=min(i,a);
       }
       else if(i<0)
       {
           b=max(i,b);
       }
       else
       return 0;
     }
     if(a==INT_MAX)
     {
         return b;
     }
      else if(b==INT_MIN)
     {
         return a;
     }
     else if(abs(b)<a)
     {
         return b;
     }
     else
     return a;
    }
};
