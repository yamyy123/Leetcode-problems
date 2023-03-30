class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>p;
        for(int i=s.size()-1;i>=0;i--)
        {
           p.push_back(s[i]);
        }
      s.clear();
      for(auto x:p)
      {
          s.push_back(x);
      }
    }
};
