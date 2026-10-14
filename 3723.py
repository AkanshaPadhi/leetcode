class Solution:
    def maxSumOfSquares(self, num: int, sum: int) -> str:
        if sum>9*num:
            return ""
        Num=num
        Sum=0
        no=""
        while(Num>0):
            for i in range(9,-1,-1):
                temp=Sum+i
                if temp>sum:
                    continue
                else :
                    no+=str(i)
                    Sum=temp 
                    break   
            Num-=1
        if Sum==sum:
            return no
        return ""

