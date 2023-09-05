class Solution:
    def minimumPossibleSum(self, n: int, target: int) -> int:
        no , taken = set(), set()
        
        curr = 1
        
        while len(taken) != n:
            if curr not in no:
                taken.add(curr)
            no.add(target - curr)
            curr += 1
        
        return sum(taken)
        