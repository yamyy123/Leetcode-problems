class Solution {
public:
    int numberOfMatches(int n) {
        int p=n;
        int sum=0;
        int res;
        while(sum!=p-1)
        {
            if(n%2==0)
            {
                res=n/2;
                sum=sum+res;
                n=res;
            }
            else
            {
                res=(n-1)/2;
                sum=sum+res;
                res=res+1;
                n=res;

            }
        }
        return sum;
    }
};
