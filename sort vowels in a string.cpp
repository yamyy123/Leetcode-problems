class Solution {
public:
    string sortVowels(string s) {
        string t;
        int flag=0;
        int size=s.size();
        for(int i=0;i<size;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'
            ||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                flag=1;
                t+=s[i];
                s[i]='.';
            }
        }
        if(flag==0){
            return s;
        }else{
            sort(t.begin(),t.end());
            int k=0;
            for(int i=0;i<size;i++){
                if(s[i]=='.'){
                    s[i]=t[k++];
                }
            }
        }
        return s;
    }
};
