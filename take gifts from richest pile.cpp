class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
      long long int n=gifts.size()-1;
       for(long long int i=0;i<k;i++)
       {
           sort(gifts.begin(),gifts.end());
           gifts[n]=sqrt(gifts[n]);
       }
       long long int l=0;
       for(int j=0;j<gifts.size();j++)
       {
           l+=gifts[j];
           cout<<l<<endl;
       }
       return l;
    }
};
