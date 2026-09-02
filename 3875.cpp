class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        vector<int> nums2(n);
        for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(nums1[i]%2==0)
        nums2[i]=nums1[i];
       else if((nums1[i]-nums1[j])%2==0)
        nums2[i]=nums1[i]-nums1[j];
    }
}

for(int i=0;i<n;i++){
    if(nums2[i]%2==0){
        if(i!=n-1){
            continue;
        }
    return true;
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(nums1[i]%2==1)
        nums2[i]=nums1[i];
       else if((nums1[i]-nums1[j])%2==1)
        nums2[i]=nums1[i]-nums1[j];
    }
}

for(int i=0;i<n;i++){
    if(nums2[i]%2==1){
        if(i!=n-1){
            continue;
        }
    return true;
    }
}

return false;
    }
};
