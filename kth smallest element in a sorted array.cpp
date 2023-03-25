class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       vector<int>p;
       int l;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                p.push_back(matrix[i][j]);
            }
        }
        sort(p.begin(),p.end());
        for( l=0;l<p.size();l++)
        {
            if(l==k-1)
            {
                return p[l];
            }
        }
       return p[l];
    }
};
