// brute force approach
class Solution {
public:
    char findTheDifference(string s, string t) {
        int p=0;
        char ans;
        for(int i=0;i<t.length();i++){
            p=0;
            for(int j=0;j<s.length();j++){
                if(t[i]==s[j]){
                 p=1;
                 s[j]='#'; 
                 break;
                }
            }
            if(p==0){
                ans=t[i];
                break;
            }
        }
        return ans;
    }
};

// optimized approach
class Solution {
public:
    char findTheDifference(string s, string t) {
        int count[26]={0};
      for(char ch:s){
        count[ch - 'a']++;
      }
          for(char ch : t){
            if (count[ch - 'a']==0)
            return ch;
            count[ch - 'a']--;
          }
          return ' ';
      }  
};
