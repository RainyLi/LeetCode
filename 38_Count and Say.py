class Solution(object):
    def SayNext(self, s):
        next=""
        length=len(s)
        pchar=0
        while pchar<length:
            pcount=0
            x=s[pchar]
            while pchar<length and s[pchar]==x:
                pcount=pcount+1
                pchar=pchar+1
            next=next+str(pcount)+str(x)
        return next
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        str="1"
        while n>0:
            str=self.SayNext(str)
            n=n-1
        return str

S=Solution()
S.countAndSay(1)