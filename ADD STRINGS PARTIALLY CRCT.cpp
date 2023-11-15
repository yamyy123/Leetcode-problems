class Solution {
public:
long long int binaryconvert(long long int a){
       long long int arr[32];
       long long int i=0;
        while(a>0){
            arr[i]=a%2;
            a=a/2;
            i++;
        }
        long long int sum=0;
     for(long long int j=i-1;j>=0;j--){
         sum=(sum*10)+arr[j];
     }
     return sum;

}
long long int decimalconvert(long long int n){
     long long int sum =0;
    long long int base =1;
     while(n>0){
         sum+=(n%10)*base;
         n=n/10;
         base*=2;
     }
     return sum;
}
string addBinary(string a, string b) {
      long long int first = stoi(a);
      long long int second = stoi(b);
       first=decimalconvert(first);
       cout<<first;
       second=decimalconvert(second);
       cout<<second;
       first=binaryconvert(first+second);
       return to_string(first); 
    }
};
