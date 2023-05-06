class Solution {
public:
    vector<string> findWords(vector<string>& w) {
        int i,j;
         for(i=0;i<w.size();i++)
         {
            int c1=0,c2=0,c3=0;
             string s=w[i];
             for(j=0;j<s.length();j++)
             {
                 if(s[j]=='q'||s[j]=='w'||s[j]=='e'||s[j]=='r'||s[j]=='t'||s[j]=='y'||s[j]=='u'||s[j]=='i'||s[j]=='o'||s[j]=='p'||s[j]=='Q'||s[j]=='W'||s[j]=='E'||s[j]=='R'||s[j]=='T'||s[j]=='Y'||s[j]=='U'||s[j]=='I'||s[j]=='O'||s[j]=='P')
                 {
                     c1++;
                 }
                 else if(s[j]=='z'||s[j]=='x'||s[j]=='c'||s[j]=='v'||s[j]=='b'||s[j]=='n'||s[j]=='m'||s[j]=='Z'||s[j]=='X'||s[j]=='C'||s[j]=='V'||s[j]=='B'||s[j]=='N'||s[j]=='M')
                 {
                     c2++;
                 }
                 else
                 {
                     c3++;
                 }
             }
             if(c1!=s.length()&&c2!=s.length()&&c3!=s.length())
             {
               w.erase(w.begin()+i);
               i--;
             }
         }
         return w;
    }
};
