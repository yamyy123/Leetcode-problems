class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<float>k;
        map<float,int>p;
        for(int i=0,j=nums.size()-1;i<nums.size()/2;i++,j--)
        {
             k.push_back((float)(nums[i]+nums[j])/2);
        }
        for(auto x:k)
        {
            p[x]++;
        }
       return p.size(); 
    }
};
