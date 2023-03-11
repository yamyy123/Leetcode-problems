class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        multiset<int>s;
        for(int i=0;i<m;i++)
        {
           
            s.insert(nums1[i]);
        }
          for(int j=0;j<n;j++)
        {
            s.insert(nums2[j]);
        }
        nums1.clear();
        nums2.clear();
        for(auto x:s)
        {
            nums1.push_back(x);
        }

    }
};
