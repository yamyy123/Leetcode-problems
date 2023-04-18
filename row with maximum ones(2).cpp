class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
       int maxcount=INT_MIN;
       int index;
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
               index=i;
           }
       }
       return{index,maxcount};
    }
};
