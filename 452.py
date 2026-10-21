class Solution:
    def findMinArrowShots(self, points: list[list[int]]) -> int:
        points.sort()
        arrows=1
        curr=points[0]
        for i  in range(1,len(points)):
            if points[i][0]<=curr[1]:
                curr=[points[i][0],min(points[i][1],curr[1])]   
                continue
            else:
                arrows+=1
                curr=points[i]
        return arrows            
