class Solution {
public:
    bool isPalindrome(string s) {
        int flag=0;
        int i=0;
        int k,y;
        string smallcase="";
   for(int m=0;m<s.size();m++)
   {
      if(s[m]>='A'&& s[m]<='Z'||s[m]>='a'&&s[m]<='z'||s[m]>='0'&& s[m]<='9')
           {
              smallcase+=tolower(s[m]);      
           }
   }
   for( k=0,y=smallcase.size()-1;k<smallcase.size();k++,y--)
   {
       if(smallcase[k]==smallcase[y])
       {
           continue;
       }
       else
       {
           return false;
       }
   }
   return true;
    }
};
