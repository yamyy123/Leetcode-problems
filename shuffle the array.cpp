class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      vector<int>p;
      int i,j;
      for(i=0, j=n;i!=n;i++,j++)
      {
        p.push_back(nums[i]);
        p.push_back(nums[j]);
      }  
      return {p};
    }
};
