class Solution:
    def minMoves(self, nums: List[int]) -> int:
        maxi=0
        for i in range(len(nums)):
            maxi=max(nums[i],maxi)
        count=0
        for num in nums:
            count+=maxi-num
        return count          
