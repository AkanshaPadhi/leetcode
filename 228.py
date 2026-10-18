
class Solution:
    def summaryRanges(self, nums: list[int]) -> list[str]:
        if not nums:
            return []

        ans = []
        j = 0
        start = nums[0]

        for i in range(1, len(nums)):
            if nums[i] == nums[i - 1] + 1:
                continue
            else:
                if start == nums[i - 1]:
                    ans.append(str(start))
                else:
                    ans.append(str(start) + "->" + str(nums[i - 1]))

                start = nums[i]

        if start == nums[-1]:
            ans.append(str(start))
        else:
            ans.append(str(start) + "->" + str(nums[-1]))

        return ans
