class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
      vector<int>y;
      vector<int>x;
      int c=nums.size();
       int a=0;
      int b=0;
      for(int i=0;i<c;i++)
      {
          if(i%2!=0)
          {
              y.push_back(nums[i]);
          }
          else
          x.push_back(nums[i]);
      }  
      sort(y.begin(),y.end(),greater<>());
      sort(x.begin(),x.end());
      nums.clear();

      for(int i=0;i<c;i++)
      {
         if(i%2==0)
         {
             nums.push_back(x[a]);
             a++;
         }
         if(i%2!=0)
         {
             nums.push_back(y[b]);
             b++;
         }
      }
      return {nums};
    }
};
