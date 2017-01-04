class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        length=len(s)
        count=0
        i=0
        pre=0
        while i<length:
            if s[i]==' ':
                count=0
            else:
                count=count+1
                pre=count
            i=i+1
        return pre