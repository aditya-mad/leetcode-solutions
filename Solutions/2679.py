class Solution:
    def matrixSum(self, nums: List[List[int]]) -> int:
        ans = 0
        for j in range(len(nums[0])):
            tempmax = -1
            for i in range(len(nums)):
                rem = max(nums[i])
                tempmax = max(tempmax, rem)
                nums[i].remove(rem)
            ans += tempmax
        return ans
