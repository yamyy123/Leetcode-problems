class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>::iterator it;
        int count=0;
        for(it=nums.begin();it!=nums.end();it++)
        {
            if(*it==0)
            {
                nums.erase(it);
                count++;
                it--;
            }
        }
        for(int i=1;i<=count;i++)
        {
            nums.push_back(0);
        }
    }
};
