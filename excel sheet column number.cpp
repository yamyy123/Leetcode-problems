class Solution {
public:
    int titleToNumber(string columnTitle) {
       int num=0;
       for(auto x:columnTitle)
       {
          // int p=x-64;
           int p=x-'A'+1;
           num=num*26+p;
       } 
       return num;
    }
};
/*the explanation of the code is, each string that enters into the loop will be from 'A'to 'Z' so if we need to convert it into normal integer 1
we need to subtract it by its ascii value(which is less 1 than its actual value.so why both the formula inside the loop will be related to this.
int p=x-64;
int p=x-'A'+1;here we are making 'A'-'A' which will become the normal value of A will be zero so why have added +1 for each value.
in second formula we have decreased 1 in prior itself.*/
