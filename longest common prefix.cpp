class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(),strs.end());
        int c =strs.size();
        string a=strs[0],b=strs[c-1],ans="";
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==b[i])
            {
               ans=ans+a[i];
            }
            else
            break;
        }
        return ans;
    }
};
