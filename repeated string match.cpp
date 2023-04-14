class Solution {
public:
    int repeatedStringMatch(string a, string b) {
       int count=1;
       string p=a;
       for(int i=0;p.length()<b.length();i++)
       {
           p+=a;
           count++;
       }
       if(p.find(b)!= -1)
       {
           return count;
       }
       count++;
       p+=a;
       if(p.find(b)!= -1)
       {
           return count;
       }
       return -1;
    }
};
