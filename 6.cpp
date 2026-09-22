class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> arr(numRows,vector<char>(2*s.length(),' '));
        if(numRows==1)
        return s;
        int a=0;
        int curr=0;
        string ans;
       
          for(int i=0;i<2*s.length();i++){
             if(a==s.length())
                    break;
            for(int j=0;j<numRows;j++){
                if(curr==0){
                arr[j][i]=s[a];
                a++;
                if(a==s.length())
                 break;
                } 
                if(j==numRows-1){
                   curr=numRows-2; 
                   break;
                }
                if(curr!=0){
                  arr[curr][i]=s[a];
                  a++;
                    if(a==s.length())
                    break;
                  curr--;
                  break;
               }
            }
          }
        
        for(int j=0;j<numRows;j++){
            for(int i=0;i<2*s.length();i++){
                if(arr[j][i]!=' ')
                ans+=arr[j][i];
                if(ans.length()==s.length())
                return ans;
            }
        }
        return ans;
    }
};
