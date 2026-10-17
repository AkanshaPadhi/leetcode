class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        seen=set(nums)
        longest=0

        for i in seen:
            if i-1 not in seen:
                current=i
                count=1

                while current+1 in seen:
                    count+=1
                    current+=1

                longest=max(longest,count) 
        return longest          
