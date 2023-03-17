class Solution {
public:
    bool checkPerfectNumber(int num) {
       long long int sum=0;
        for(long long int i=1;i<=num/2;i++)
        {
            if(num%i==0)
            {
               sum=sum+i;
            }
        }
        if(sum==num)
        {
            return true;
        }
        return false;
    }
};
