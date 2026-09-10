class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=0;
         for(int i=0;i<operations.size();i++){
            if(operations[i][1]=='+')
             n++;
             else n--;
         }
         return n;
    }
};
