class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
       int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==i||nums[i]==i+1||nums[i]==i-1)
            {
                count++;
            }
        }
        if(count==nums.size())
        {
            return true;
        }
        return false;
        /*for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i]-i)>1)
            {
                return false;
            }
        }
        return true;*/
    }
};
