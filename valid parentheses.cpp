class Solution {
public:
    bool isValid(string s) {
      stack<char>p;
      for(auto x : s)
      {
        if(x=='('||x=='{'||x=='[')
        {
            p.push(x);
        }  
        else{
            if(p.size()==0)
            {
                return false;
            }
         else if(p.top()=='('&& x==')')
          {
              p.pop();
          }
          else if(p.top()=='{'&& x=='}')
          {
              p.pop();
          }
          else if(p.top()=='['&& x==']')
          {
              p.pop();
          }
          else
          {
              return false;
          }
        }
      }
    if(p.size()==0)
      return true;
      else
      return false;
    }
};
