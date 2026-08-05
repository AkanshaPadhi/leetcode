class Solution {
public:
    int lengthOfLastWord(string s) {
       int l=s.length();
       string word;
       int ans1;
        for(int i=0;i<l;i++){
            if(s[i]!=' ')
          word+=s[i];
          if(s[i]==' ' || i==l-1){
            if(!word.empty())
            ans1=word.length();
          word.clear();
          }
        }
           return ans1;
        }
};
