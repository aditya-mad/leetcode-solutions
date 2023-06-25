class Solution:
    def countBeautifulPairs(self, nums: List[int]) -> int:
        ans = 0
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                temp = str(nums[i])
                if(math.gcd(nums[j]%10, int(temp[0])) == 1):
                    ans += 1
        return ans