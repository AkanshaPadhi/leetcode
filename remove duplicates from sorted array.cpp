#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int p=1;
        int a=nums[0];
         for(int i=1;i<n;i++){
          if(nums[i]!=a){
          nums[p]=nums[i];
          p++;
          a=nums[i];
          }
          }
          return p;
         }
};
