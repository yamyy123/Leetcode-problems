class Solution {
public:
    int verify(char a)
       {
               if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
               {
                 return 1;
               }
               else
               {
                   return 0;
               }

       }
    int vowelStrings(vector<string>& words, int left, int right) {
       
        int count=0;
        for(int i=left;i<=right;i++)
        {
            if(verify(words[i][0]) && verify(words[i][words[i].size()-1]))
            {
                count++;
            }
        }
        return count;
    }
};
