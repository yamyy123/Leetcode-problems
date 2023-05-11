class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         map<int,int>p;
         vector<int>k;
         for(auto x:arr)
         {
            p[x]++;
         }
         for(auto x:p)
         {
             k.push_back(x.second);
         }
         sort(k.begin(),k.end());
         for(int i=0;i<k.size()-1;i++)
         {
             if(k[i]==k[i+1])
             {
                 return false;
             }
         }
     return true;
         
    }
};
