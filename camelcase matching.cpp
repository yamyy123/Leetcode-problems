class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
      vector<bool>p;
        for(int i=0;i<queries.size();i++)
        {
            int count=0;
            for(int j=0;j<queries[i].size();j++)
            {
                if(count<pattern.size() && queries[i][j]== pattern[count])
                {
                    count++;
                }
                else if(queries[i][j]>='A'&& queries[i][j]<='Z')
                {
                    p.push_back(false);
                    break;
                }
                if(j==queries[i].size()-1)
                {
                    if(count==pattern.size())
                    {
                        p.push_back(true);
                    }
                    else{
                        p.push_back(false);
                    }
                }
            }
        }
        return {p};
    }
};
