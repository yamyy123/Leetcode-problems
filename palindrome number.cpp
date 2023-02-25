class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        else
        {
        int i=0;
        int b=x;
        int rev;
        long long int sum=0;
        while(b!=0)
        {
            rev=b%10;
            sum=sum*10+rev;
            b=b/10;
            

        }
        if(sum==x||sum==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        }
}
};
