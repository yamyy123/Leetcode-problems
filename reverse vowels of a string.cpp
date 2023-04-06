class Solution {
public:
    string reverseVowels(string s){
        string p="";
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                 p+=s[i];
                 s[i]='=';
                count++;
            }
        }
        reverse(p.begin(),p.end());
        int a=0;
        for(int i=0;i<s.length();i++)
        {
           
            if(s[i]=='=')
            {
                s[i]=p[a];
                a++;
            }
        }
       return {s};
    }
};
