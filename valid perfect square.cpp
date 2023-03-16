class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
        {
            return true;
        }
      for(long long int i=0;i<=sqrt(num);i++)
      {
          if(i*i==num)
          {
              return true;
          }
      }  
      return false;
    }
};
