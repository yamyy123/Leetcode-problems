class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       vector<int>k;
       set<int>m;
        for(auto it=arr2.begin();it!=arr2.end();it++)
        {
            for(auto it1=arr1.begin();it1!=arr1.end();it1++)
            {
                if(*it1==*it)
                {
                  k.push_back(*it1);   
                  arr1.erase(it1);
                  it1--;
                }
            }
        }
        sort(arr1.begin(),arr1.end());
        for(auto x:arr1)
        {
            k.push_back(x);
        }
        
        return {k};
    }
};
