class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     vector<int> answer(nums.size());
     vector<int> before(nums.size());
     vector<int> after(nums.size());
     before[0]=1;
     for(int i=1;i<nums.size();i++){
     before[i]=nums[i-1]*before[i-1];
     }
     after[nums.size()-1]=1;
     for(int i=nums.size()-2;i>=0;i--){
       after[i]=after[i+1]*nums[i+1];
    }
    for(int i=0;i<nums.size();i++){
      answer[i]=before[i]*after[i];
    }
    return answer;
    }
};
