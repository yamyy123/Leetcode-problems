class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start=INT_MIN;
        int place=0;
        for(int i=0;i<nums.size();i++)
        {
            if(start!=nums[i])
            {
                start=nums[i];
                nums[place++]=start;
            }
            else
            continue;
        }
        return place;
    }
};
