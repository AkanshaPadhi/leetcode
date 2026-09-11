class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int numb=0;
        vector<int> nums;
        for(int k=0;k<digits.size();k++){
        for(int  =0;j<digits.size();j++){
            if(j==k)
            continue;
        for(int i=0;i<digits.size();i++){
            if(i==j || i==k)
            continue;
          numb=(digits[k]*100)+(digits[j]*10)+digits[i];
            if((numb<100) || numb%2!=0)
    
            continue;
            if(nums.size()==0)
            nums.push_back(numb);
            for(int a=0;a<nums.size();a++){
                if(numb==nums[a])
                break;
                if(a==nums.size()-1)
                nums.push_back(numb);
            }
        
           
        }
        }
        }
        return nums.size();
    }
};
