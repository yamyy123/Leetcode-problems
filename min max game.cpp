class Solution {
public:
    int minMaxGame(vector<int>& nums) {
       vector<int>p;
       int c;
       if(nums.size()==1)
       return nums[0];
      label:
       for(int i=0;i<nums.size()/2;i++)
       {
          if(i%2==0)
          {
              c= min(nums[2 * i], nums[2 * i + 1]);
             p.push_back(c);
          }
           if(i%2!=0)
          {
              c= max(nums[2 * i], nums[2 * i + 1]);
             p.push_back(c);
          }
       }
         if(nums.size()>1)
          {
          nums.clear();
          for(auto x:p)
          {
              nums.push_back(x);
          }
          p.clear();
          goto label;
          }
          return nums[0];
    }
};
