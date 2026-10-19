class Solution:
    def targetIndices(self, nums: list[int], target: int) -> list[int]:
        nums.sort()
        ans=[]
        found=False 
        for i in range (len(nums)):
            if nums[i]==target:
                while i<len(nums) and nums[i]==target:
                    ans.append(i)
                    i+=1
                break
        return ans
