class Solution:
    def merge(self, intervals: list[list[int]]) -> list[list[int]]:
        ans=[]
        intervals.sort()
        for interval in intervals:
            if not ans or interval[0]>ans[-1][1]:
                ans.append(interval)
            else: 
                ans[-1][1]=max(interval[1],ans[-1][1])
        return ans        
