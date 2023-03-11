class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      set<int>l;
      int a=0;
      for(auto t:nums1)
      {
          for(auto x:nums2)
          {
              if(t==x)
              {
                l.insert(x);
                
              }
          }
      }
      nums1.clear();
      for(auto p:l)
          {
            nums1.push_back(p);
          }

      return {nums1};
    }
};
