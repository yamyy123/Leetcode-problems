class Solution {
public:
    string reverseWords(string s) {
        vector<string>str;
        string p;
        for(int i=0;i<s.length();i++)
        {
             p="";
            if( s[i]>='A'&& s[i]<='Z'||s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9')
            {
                for(int j=i;j<s.length();j++)
                {
                    if(s[j]==' ')
                    {
                        break;
                    }
                    p+=s[j];
                    i=j;
                }
                if(str.size()!=0)
                p+=' ';
    
            }
            if(p.size()!=0)
            str.push_back(p);
        }
           string t="";
           for(auto it=str.end()-1;it>=str.begin();it--)
           {
               
               t.append(*it);
           }
        return t;
    }
}; 
