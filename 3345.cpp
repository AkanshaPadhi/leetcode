class Solution {
public:
    int smallestNumber(int n, int t) {
        int prod;
        int dig;
        int ans;
        int num;
     for(int i=n; ;i++){
        num=i;
        prod=1;
        while(num!=0){
         dig=num%10;
         ans=i;
         num=num/10;
        prod*=dig;
        }
        if(prod%t==0)
        break;
     }
     return ans; 
    }
};
