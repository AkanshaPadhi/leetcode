class Solution {
public:
    string reverseWords(string s) {
        int word=0;
        int curr=0;
        int end;
        string ans;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '){
                if(word==0)
                continue;
                else if(i==0 || (s[i-1]==' ')){
                continue;
                }
                else ans+=' ';
            }
            if(s[i]!=' '){
                if(word==0)
                word=1;
                if(curr==0){
                curr=1;
                end=i;
                }
                if(i==0 || s[i-1]==' '){
                for(int j=i;j<=end;j++){
                    ans+=s[j];
                }
                curr=0;
                }
            }    
        }
        return ans;
    }
};
