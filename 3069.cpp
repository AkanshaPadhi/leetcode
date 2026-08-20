class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
       int arr1[50];
       int arr2[50];
       arr1[0]=nums[0];
       int a=0;
       int b=0;
       arr2[0]=nums[1];
       for(int i=2;i<nums.size();i++){
        if(arr1[a]>arr2[b]){
        arr1[a+1]=nums[i];
        a++;
        }
        else{
        arr2[b+1]=nums[i];
        b++;
       }
       }
              vector<int> result;
       for(int i=0;i<=a;i++)
        result.push_back(arr1[i]);
       for(int i=0;i<=b;i++)
       result.push_back(arr2[i]);
     return result;
    }
};
