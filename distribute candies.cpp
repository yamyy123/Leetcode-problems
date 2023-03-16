class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
       set<int>k;
        int c=candyType.size()/2;
        int count=0;
        for(auto x:candyType)
        {
            k.insert(x);
        }
        if(k.size()<=c)
        {
            return k.size();
        }
        return c;
    }
};
