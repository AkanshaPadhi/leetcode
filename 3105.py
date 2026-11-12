class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        count=1
        maxiI=1
        for i in range(1,len(nums)) :
            if nums[i]>nums[i-1]:
                count+=1              
                maxiI=max(maxiI,count)
            else:
                count=1
        count=1
        maxiD=1
        for i in range(1,len(nums)) :
            if nums[i]<nums[i-1]:
                count+=1
                maxiD=max(maxiD,count)
            else:
                count=1        
        return max(maxiI,maxiD)        
                
           
