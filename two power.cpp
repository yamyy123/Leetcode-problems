class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n==1)
       {
           return true;
       }
        for(long long int i=2;i<=n;i=i*2)
        {
          if(i==n)
          {
            return true;
          }
        }
        return false;
    }
};
