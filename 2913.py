class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        sum=0
        for k in range(1,len(nums)+1):
            i=0
            j=0
            while(j+k<=len(nums)):
                count=set(nums[i:j+k])
                sum+=(len(count))**2
                i+=1
                j+=1
        return sum         
