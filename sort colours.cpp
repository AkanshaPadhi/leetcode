#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int a=0;
       int n=nums.size();
       for(int i=0;i<n;i++){
        if(nums[i]==0){
            swap(nums[a],nums[i]);
                a++;
            }
        }
       for(int j=0;j<n;j++){
        if(nums[j]==1){
            swap(nums[a],nums[j]);
            a++;
        }
       }
       for(int k=0;k<n;k++){
        if(nums[k]==2){
            swap(nums[a],nums[k]);
            a++;
        }
       }
    }
};
