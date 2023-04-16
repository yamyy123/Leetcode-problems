class Solution {
public:
    bool strongPasswordCheckerII(string password) {
       int count1=0,count2=0,count3=0,count4=0;
       if(password.length()<8)
       {
           return false;
       }
        for(int i=0;i<password.length();i++)
        {
            if(password[i]>='a'&& password[i]<='z')
            {
                count1++;
            }
           else if(password[i]>='A'&& password[i]<='Z')
            {
                count2++;
            }
            else if(password[i]>='0'&& password[i]<='9')
            {
                count3++;
            }
             else if(password[i]>='!'&& password[i]<='/' ||password[i]=='@'||password[i]=='^')
            {
                count4++;
            }
            if(i!=0 && password[i-1]==password[i])
            {
                return false;
            }
        }
        if(count1!=0 && count2!=0 && count3!=0 && count4!=0)
        {
            return true;
        }
        else
        return false;
    }
};
