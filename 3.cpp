class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> st;
        if(s.length()==0)
        return 0;
        if(s.length()==1)
        return 1;
        int ans=0;
        int left=0;  
       st.insert(s[0]);
       for(int i=1;i<s.length();i++){
       if(!st.count(s[i])){
        st.insert(s[i]);  
        ans=max(ans,i-left+1);
       } 
       else{
        while(st.count(s[i])){
          st.erase(s[left]);
          left++;
        }
         st.insert(s[i]);  
       ans=max(ans,i-left+1);  
       }
       } 
       return ans;
    }
};
