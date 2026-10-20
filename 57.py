class Solution:
    def insert(self, intervals: list[list[int]], newInterval: list[int]) -> list[list[int]]:
        ans=[]
        intervals.append(newInterval)
        intervals.sort()

        for i in range(0,len(intervals)):
            if not ans or intervals[i][0]>ans[-1][1] :
                ans.append(intervals[i])
            else:    
                ans[-1][1]=max(intervals[i][1],ans[-1][1])    
            
        return ans  
