class Solution {
public:
    int maxProduct(vector<int>& nums) {
     sort(nums.begin(),nums.end());
      int max=INT_MIN;
        for(int i=0;i<nums.size()-1;i++)
        {
            if((nums[i]-1)*(nums[i+1]-1)>max)
            {
                max=((nums[i]-1)*(nums[i+1]-1));
            }
        }
        return max;
    }
};
