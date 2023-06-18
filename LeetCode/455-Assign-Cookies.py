class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g = sorted(g, reverse= True)
        s = sorted(s, reverse= True)
        count = 0
        i, j = 0, 0
        while i < len(g) and j < len(s):
            if g[i] <= s[j]:
                count += 1
                j += 1
            i += 1
        return count
