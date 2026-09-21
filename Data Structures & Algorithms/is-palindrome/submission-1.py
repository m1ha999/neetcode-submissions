class Solution:
    def isPalindrome(self, s: str) -> bool:
        string1 = ""
        for char in reversed(s.lower()):
            if char.isalnum():
                string1 += char

        string2 = string1[::-1]
        if string1 == string2:
            return True
        else:
            return False
