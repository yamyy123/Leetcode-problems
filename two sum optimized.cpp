class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int>p;
       for(int i=0;i<nums.size();i++)
       {
           int diff=target-nums[i];
           if(p.find(diff)!=p.end())//element found before end of the map.
           {
               return {i,p[diff]};
           }
           p[nums[i]]=i;
       }
       return {};*/
    }
};
