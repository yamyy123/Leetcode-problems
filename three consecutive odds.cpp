class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
      for(int i=0;i<arr.size();i++)  
      {
          if(arr[i]%2!=0)
          {
            count++;
            for(int j=i+1;j<arr.size();j++)
            {
               if(arr[j]%2!=0)
               {
                   count++;
               }
               else
               {
                   break;
               }
               if(count==3)
               {
                   return true;
               }
            }
            count=0;
          }
      }
      return false;
    }
};
