class Solution {
public:
    string reverseStr(string s, int k) {
        if(k==1)
        {
            return s;
        }
        int p=k;
        int count=0;
        if(k>s.length())
        {
            reverse(s.begin(),s.end());
            return s;
        }
        else if(s.length()<p && s.length()>=k)
        {
            string f="";
            for(int i=0;i<k;i++)
            {
                f+=s[i];
            }
            reverse(f.begin(),f.end());
             for(int i=0;i<k;i++)
            {
                s[i]=f[i];
            }
             return {s};
        }
        else
        {
            string t="";
            string j="";
            int a=2;
            for(int i=0;i<s.length();i++)
            {
                if(((i)>(a*p)-1))
                {
                    k=p+(a*p);
                    count++;
                    a=a+2;
                }//main part of the program
               if(i<k)
               {
                 j+=s[i];
                 if(i==k-1||i==s.length()-1)
                 {
                     reverse(j.begin(),j.end());
                     t+=j;
                     j="";
                     cout<<count<<endl;
                 }
                 continue;
               }
              t+=s[i];
            }
            s=t;
        }
        return {s};
    }
};
