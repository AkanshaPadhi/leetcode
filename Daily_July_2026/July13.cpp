class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
       int helpL=low;
       int digitL=0;
       while(helpL>0){
         digitL++;
         helpL/=10;
        }
       int helpH=high;
       int digitH=0;
       while(helpH>0){
        digitH++;
        helpH/=10;
       }
       int sum=0;
       for(int k=0;k<=(digitH-digitL);k++){
        for(int i=1;i<=10-digitL-k;i++){
        for(int j=i;j<=digitL+k+i-1;j++){
         sum=sum*10 + j;  
        } 
        if(sum>=low && sum<= high){
        ans.push_back(sum);
        }
        sum=0;
       }
       }
       return ans;
    }
};
