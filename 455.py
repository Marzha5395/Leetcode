def match(s, g_array):
    change = False
    for g in g_array:
        if s >= g:
            g_array.remove(g)
            change = True
            break
    return change,g_array
class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        if len(s) == 0 or min(g) > max(s) :
            return 0
        result = 0
        g.sort(reverse=True)
        s.sort(reverse=True)
        for i in s:
            change, g = match(i,g)
            if change:
                result += 1
        return result
