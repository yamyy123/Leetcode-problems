class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
       int count=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
               nums[i]=nums[i]*2;
               nums[i+1]=0;
            }
        }
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            if(*it==0)
            {
                nums.erase(it);
                it--;
                count++;
            }
        }
        for(int i=0;i<count;i++)
        {
            nums.push_back(0);
        }
        return {nums};
    }
};
