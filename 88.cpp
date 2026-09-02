//solution 1 using extra array to copy first m elements of nums1
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr(m);
        int j=0;
        int k=0;
        copy(nums1.begin(),nums1.begin() + m,arr.begin());
        for(int i=0;i<m+n;i++){

          
            if((j!=m) && (k==n || arr[j]<=nums2[k])  ){     
            nums1[i]=arr[j];
            j++;
            }
            
        
      else if( (k!=n) && (j==m || nums2[k]<arr[j]) ){      
            nums1[i]=nums2[k];
            k++;
            }
        }
    }
};
