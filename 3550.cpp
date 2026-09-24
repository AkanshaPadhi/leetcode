class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum;
        int num;
        for(int i=0;i<nums.size();i++){
            sum=0;
           num=nums[i];
           while(num>0){
            sum+=num%10;
            num=num/10;
           }
           if(i==sum)
           return i;
        }
        return -1;
    }
};
