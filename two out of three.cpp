class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int>k;
        vector<int>m;
        auto it=k.begin();
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                  k.insert(it,nums1[i]);
                  it++;
                }
            }
        }
         for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums3.size();j++)
            {
                if(nums1[i]==nums3[j])
                {
                  k.insert(it,nums1[i]);
                  it++;
                }
            }
        }
         for(int i=0;i<nums2.size();i++)
        {
            for(int j=0;j<nums3.size();j++)
            {
                if(nums2[i]==nums3[j])
                {
                  k.insert(it,nums2[i]);
                  it++;
                }
            }
        }
        for(auto x:k)
        {
            m.push_back(x);
        }
        return {m};
    }
};
