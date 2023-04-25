class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       map<int,int>p;
       vector<pair<int,int>>l;
       for(auto x:nums)
       {
           p[x]++;
       }
       nums.clear();
       for(auto x:p)
       {
           l.push_back({x.second,x.first});
       }
       sort(l.begin(),l.end(),greater<>());
       for(int i=0;i<k;i++)
       {
         nums.push_back(l[i].second);
       }
       return {nums};
    }
};
