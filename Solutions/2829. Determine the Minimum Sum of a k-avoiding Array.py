class Solution:
    def minimumSum(self, n: int, k: int) -> int:
        no, taken = [], []
        no = set(no)
        taken = set(taken)
        current = 1
        while len(taken) != n:
            if current not in no:
                taken.add(current)
            no.add(k - current)
            current += 1
        return sum(taken)
            
            
            
