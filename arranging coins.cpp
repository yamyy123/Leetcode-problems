class Solution {
public:
    int arrangeCoins(int n) {
    long long int count=0;
    long long int a=2;
     for(long long int i=1;i<=n;a++) 
     {
         i=i+a;
         count++;
     }  
     return count;
    }
};
