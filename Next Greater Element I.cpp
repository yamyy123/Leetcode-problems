class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int a=0;
        label:
        for(int i=0;i<nums2.size();i++)
        {
            if(a>nums1.size()-1)
             {
                 break;
             }
                if(nums1[a]==nums2[i])
                {
                    for(int j=i;j<nums2.size();j++)
                    {
                        if(nums1[a]<nums2[j])
                        {
                            ans.push_back(nums2[j]);
                             a++;
                            goto label;
                        }
                         if(j==nums2.size()-1)
                         {
                            ans.push_back(-1);
                             a++;
                            goto label;
                         } 
                    }
                  
                }  
                
        }
        return {ans};
    }
};
