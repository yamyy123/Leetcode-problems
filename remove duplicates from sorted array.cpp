class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       map<int,int>p;
       for(auto x:nums)
       {
           p[x]++;
       }
       nums.clear();
       for(auto x:p)
       {
           if(x.second>=2)
           {
               nums.push_back(x.first);
               nums.push_back(x.first);
           }
          if(x.second<2)
           {
               nums.push_back(x.first);
           }
       }
       return nums.size();
    }
};
