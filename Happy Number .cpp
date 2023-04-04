class Solution {
public:
    int result(int n)
    {
        int sum=0,r;
        while(n)
        {
            r=n%10;
            sum=sum+(r*r);
            n/=10;
        }
        return sum;
        
    }

    bool isHappy(int n)
     {  
         int first,second; 
    first=second=n;
   do{
    first=result(first);
    second=result(second);
     second=result(second);
    }while(first!=second);
    if(second==1)
    {
        return true;
    }
    else
    return false;
    }
};
