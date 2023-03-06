class Solution {
public:
    int mySqrt(int x) {
   long long int m=0,b,flag=1,a;
    for(a=0;a<=x;a++)
    {
       if(a*a==x)
       {
           m=a;
           break;
       }
       if(a*a>x)
       {
        m=a-1;
        break;
       }
    }
    
    return m;
    }
    };
