class Solution:
    def countSeniors(self, details: List[str]) -> int:
        ans = 0
        for names in details:
            age = names[-4:-2]
            age = int(age)
            if age > 60:
                ans += 1
        return ans
