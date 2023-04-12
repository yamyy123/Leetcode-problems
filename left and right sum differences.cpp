class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
      vector<int>a;vector<int>b;vector<int>c;
     int k=0;int l=0;int h=0;
     
     auto it1=nums.end()-1;
     a.push_back(k);
    
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()-1){
            k=k+nums[i];
            a.push_back(k);}
            if(i<nums.size()-1)
              {  l=l+*it1;
                b.push_back(l);
                it1--;}
        }
        reverse(b.begin(),b.end());
          b.push_back(0);
            auto it2 =b.begin();
      for(auto x:a){
          h=abs(x-*it2);
          it2++;
          c.push_back(h);
          }
      return {c};  
    }
};
