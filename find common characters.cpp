class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
    vector<int>p(26,INT_MAX);
    for(int i=0;i<words.size();i++)
    {
        vector<int>temp_freq(26,0);
        string s=words[i];
        for(int j=0;j<s.size();j++)
        {
            temp_freq[s[j]-'a']++;
        }
        for(int k=0;k<26;k++)
        {
            p[k]=min(p[k],temp_freq[k]);
        }
    }
    vector<string>ans;
    for(int i=0;i<26;i++)
    {
        while(p[i]!=0)
        {
            string l="";
            char g= 'a'+i;
            l=l+g;
            ans.push_back(l);
            p[i]--;
        }
    }
      return {ans};
    }
};
