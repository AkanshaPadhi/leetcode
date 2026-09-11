class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int count=0;
        for(int i=n;i>0;i--){
        count=0;
        for(int j=0;j<n;j++){
           if(citations[j]>=i){
           count++;
            if (count==i)
            return i;
                }
        }
        }
        return 0;
    }
};
