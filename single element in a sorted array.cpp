class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int a;
        if(nums.size()==1)
        {
            return nums[0];
        }
        else
        {
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==nums[i+1])
        {
            i++;
            continue;
        }
        if(nums[i]!=nums[i+1])
        {
          a=nums[i];
          break;  
        }
    }    
    return a;
        }
    }
};
