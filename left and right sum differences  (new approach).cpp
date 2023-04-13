class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
     deque<int>left;
     deque<int>right;
     left.push_back(0);
     right.push_back(0);
     int a=0;
     int prev=right[0];
     for(int i=0,j=nums.size()-1;i<nums.size()-1;i++,j--)
     {

        left.push_back(left[a++]+nums[i]);
        right.push_front(prev+nums[j]);
        prev=prev+nums[j];
     }
    nums.clear();
    for(int i=0;i<left.size();i++)
    {
        nums.push_back(abs(left[i]-right[i]));
    }
    return {nums};
    }
};
