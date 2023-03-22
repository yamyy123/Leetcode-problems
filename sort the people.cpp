class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       vector<pair<int,string>>p;
       vector<string>o;
        for(int i=0;i<heights.size();i++)
        {
            p.push_back({heights[i],names[i]});
        }
        sort(p.begin(),p.end(),greater<>());
        for(auto x:p)
        {
          o.push_back(x.second);
        }
        return {o};
    }
};
