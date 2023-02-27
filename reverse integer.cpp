class Solution {
public:
    int reverse(int x) {
         long int sum=0;
        int a;
        for(int i=0;x!=0;i++)
        {
            a=x%10;
            sum=sum*10+a;
            x=x/10;

        }
        if(sum>INT_MAX||sum<INT_MIN)
        {
            return 0;
        }
        else
        return sum;
    }
};
