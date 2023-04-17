class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int c=0;
        for(int j=0;j<operations.size();j++)
        {
            if(operations[j][0]=='-'||operations[j][2]=='-')
            {
                c--;
            }
            else
            {
                c++;
            }
        }
      return c;
    }
};
