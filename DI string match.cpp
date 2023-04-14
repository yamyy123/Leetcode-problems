class Solution {
public:
    vector<int> diStringMatch(string s) {
       int n=s.size();
       vector<int>perm;
       int i=0;
       int j=s.size();
       int p=j;
       for(int k=0;k<n;k++)
       {
           if(s[k]=='I')
           {
               perm.push_back(i++);
           }
            else
           {
               perm.push_back(j--);
           }
       }  
       perm.push_back(i);
       return {perm};
    }
};
