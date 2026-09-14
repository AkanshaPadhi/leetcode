class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        vector<int> diff(n);
        int total=0;
       for(int i=0;i<n;i++){
         diff[i]=gas[i]-cost[i];
         total+=diff[i];
       } 
       if(total<0)
       return -1;

       int fuel=0;
       int start=0;
       for(int i=0;i<n;i++){
        fuel+=diff[i];
        if(fuel<0){
            start=i+1;
            fuel=0;
        }
       }
       return start;
    }
};
