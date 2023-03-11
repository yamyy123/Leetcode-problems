class Solution {
public:
    void sortColors(vector<int>& nums) {
        multiset<int>p;
        for(auto x:nums)
        {
            p.insert(x);
        }
        nums.clear();
        for(auto i:p)
        {
            nums.push_back(i);
        }
    }
};
