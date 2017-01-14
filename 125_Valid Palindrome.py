class Solution(object):
    def isCharacter(self, c):
        if c.isalpha() or c.isdigit():
            return True
        else:
            return False
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s=s.upper()
        length=len(s)
        p=0
        q=length-1
        while(p<length and q>=0):
            while not self.isCharacter(s[p]):
                p=p+1
                if p>q:
                    return True
            while not self.isCharacter(s[q]):
                q=q-1
                if q<p:
                    return True
            if s[p]!=s[q]:
                return False
            else:
                p=p+1
                q=q-1
        return True