class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int p=s.size()-1;
        int n=1;
        while(s[p]==' '){
           p= p-1;
        }
    

        for(int i=p;i>=0;i--)
        {
            if(s[i]==' ')
            {
                break;
            }
            count++;
        }
        return count;
    }
};
