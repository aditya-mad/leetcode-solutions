class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        a , b = set(), set()
        ans = []
        for i in range(len(A)):
            a.add(A[i])
            b.add(B[i])
            c = a.intersection(b)
            ans.append(len(c))
        return ans