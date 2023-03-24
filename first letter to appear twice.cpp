class Solution {
public:
    char repeatedCharacter(string s) {
        vector<pair<char,int>>p;
        int c=INT_MAX;
        char d;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i+1;j<s.length();j++)
            {
                if(s[i]==s[j])
                {
                    p.push_back({s[j],j});
                   
                }
            }
        }
        for(auto x:p)
        {
            if(x.second<c)
            {
            d=x.first;
            c=x.second;
            }
        }
        return d;
    }
};
