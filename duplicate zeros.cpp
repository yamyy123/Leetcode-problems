class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int s=arr.size();
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
               i++;
                arr.insert(arr.begin()+i,0);
            }
        }
        arr.clear();
        for(int j=0;j<s;j++){
            arr.push_back(arr[j]);
        }
     
    }
};
