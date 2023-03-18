class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>k;
        map<int,int>l;
        int n=0;
        for(auto x:nums)
        {
            l[x]++;
            n++;
        }
        for(auto y:l)
        {
            if(y.second>n/3)
            {
                k.push_back(y.first);
            }
        }
        return {k};
    }
};
