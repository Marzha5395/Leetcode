def isPalindrome(s):
    return s == s[::-1]

class Solution:
    def longestPalindrome(self, s: str) -> str:
        if isPalindrome(s):
            return s
        for i in range(len(s)-1, -1, -1):
            for j in range(len(s)-i+1):
                if isPalindrome(s[j:j+i]):
                    return s[j:j+i]
        return s[0]
