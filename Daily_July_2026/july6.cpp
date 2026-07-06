class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
       sort(intervals.begin(), intervals.end(),
    [](vector<int> &a, vector<int> &b) {
        if(a[0] == b[0])
            return a[1] > b[1];   // End descending
        return a[0] < b[0];       // Start ascending
    }) ;
    int maxend= intervals[0][1];
    int end;
    int count= 1;
    for ( int i = 1; i < n; i++){
        end= intervals[i][1];
        if(end > maxend){
            count++;
            maxend=end;
        } 
    }
    return count;
    }
};
