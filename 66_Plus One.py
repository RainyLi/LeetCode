class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        length=len(digits)
        i=length-1
        c=1
        while i>=0:
            x=digits[i]+c
            c=x/10
            digits[i]=x%10
            i=i-1
        if c!=0:
            digits.insert(0,c)
        return digits