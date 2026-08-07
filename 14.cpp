#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string ans;
      int i;
      int minlen=strs[0].length();
      for(int k=0;k<strs.size();k++){
        if(strs[k].length()<minlen)
        minlen=strs[k].length();
      }
      if(strs.size()!=1){
      for(int j=0;j<minlen;j++){
      for(i=0;i<strs.size()-1;i++){
         if(strs[i][j] != strs[i+1][j]) 
         return ans;
         if(i==strs.size()-2)
         ans+=strs[i][j];
      }
      } 
      }
      else 
      ans=strs[0];
    //   if(ans.empty()){
    //   ans="";
    //   }
          return ans;
              }
};
