class Solution:
    def removeTrailingZeros(self, num: str) -> str:
        num = num[::-1]
        num = int(num)
        num = str(num)
        num = num[::-1]
        return num
