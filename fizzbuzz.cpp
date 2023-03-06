class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
     for(int i=1;i<=n;i++)
        {
           string p;
           if(i%3==0)
           {
               p+="Fizz";
           }
           if(i%5==0)
           {
               p+="Buzz";
           }
      ans.push_back(p.empty()? to_string(i):p);
        }
        return{ans};
    }
};
