class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    deque<int>l(nums.begin(),nums.end());
    int c=l.size();
      for(int i=1;i<=k;i++)
      {
          int o=l[l.size()-1];
          l.push_front(o);
          l.pop_back();
      }
   
      nums.clear();
      for(int i=0;i<c;i++)
      {
          nums.push_back(l[i]);
      }
    }
};
