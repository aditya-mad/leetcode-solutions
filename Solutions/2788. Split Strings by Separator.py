class Solution:
    def splitWordsBySeparator(self, words: List[str], separator: str) -> List[str]:
        temp = ""
        for i in words:
            temp = temp + separator + i
        ans = temp.split(separator)
        
        while "" in ans:
            ans.remove("")
        return ans
        