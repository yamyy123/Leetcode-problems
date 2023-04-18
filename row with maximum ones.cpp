class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
       vector<pair<int,int>>p;
       int maxcount;
       for(int i=0;i<mat.size();i++) 
       {
            int count=0;
           for(int j=0;j<mat[i].size();j++)
           {
               if(mat[i][j]==1)
               {
                  count++;
               }
           }
           if(count>maxcount)
           {
               maxcount=count;
           }
           p.push_back({i,count});
       }
       for(auto x:p)
       {
           if(x.second==maxcount)
           {
               return {x.first,x.second};
           }
       }
       return{};
    }
};
