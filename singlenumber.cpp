class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int b=0;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++)
       {
           b^=nums[i];
       }
       return b;
    }
};
