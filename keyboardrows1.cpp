class Solution {
    public:
    int recieveq(int i,vector<string>&words)
    {
        string s="qwertyuiop";
        string t="QWERTYUIOP";
        int flag;
        for(int j=0;j<words[i].size();j++)
        {
             flag=0;
            for(int k=0;k<10;k++)
            {
                if(words[i][j]==s[k]||words[i][j]==t[k])
                {
                  flag=1;
                }
            }
            if(flag==0)
            {
                return flag;
            }
        }
         return flag;
    }
     int recievea(int i,vector<string>&words)
    {
        string s="asdfghjkl";
        string t="ASDFGHJKL";
        int flag;
        for(int j=0;j<words[i].size();j++)
        {
             flag=0;
            for(int k=0;k<9;k++)
            {
                if(words[i][j]==s[k]||words[i][j]==t[k])
                {
                  flag=1;
                }
            }
            if(flag==0)
            {
                return flag;
            }
        }
         return flag;
    }
     int recievez(int i,vector<string>&words)
    {
        string s="zxcvbnm";
        string t="ZXCVBNM";
        int flag;
        for(int j=0;j<words[i].size();j++)
        {
             flag=0;
            for(int k=0;k<7;k++)
            {
                if(words[i][j]==s[k]||words[i][j]==t[k])
                {
                  flag=1;
                }
            }
            if(flag==0)
            {
                return flag;
            }
        }
         return flag;
    }
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>p;
         for(int i=0;i<words.size();i++)
         {
             string s="qwertyuiop";
             string t="QWERTYUIOP";
             string l="asdfghjkl";
             string m="ASDFGHJKL";
             string y="ZXCVBNM";
             string z="zxcvbnm";
             for(int j=0;j<10;j++)
             {
                 if(words[i][0]==s[j]||words[i][0]==t[j])
                 {
                    if(recieveq(i,words))
                   {
                      p.push_back(words[i]);
                      break;
                   }
                 }
             }
              for(int k=0;k<9;k++)
             {
                 if(words[i][0]==l[k]||words[i][0]==m[k])
                 {
                    if(recievea(i,words))
                   {
                      p.push_back(words[i]);
                      break;
                   }
                 }
             }
               for(int r=0;r<7;r++)
             {
                 if(words[i][0]==y[r]||words[i][0]==z[r])
                 {
                    if(recievez(i,words))
                   {
                      p.push_back(words[i]);
                      break;
                   }
                 }
             }
             
         }
         return {p};
    }
};
