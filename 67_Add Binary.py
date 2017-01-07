class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        la=len(a)
        lb=len(b)
        s=""
        i=la-1
        j=lb-1
        c=0
        while (i >=0 and j >= 0):
            x=int(a[i])+int(b[j])+c
            c=x/2
            s=str(x%2)+s
            i=i-1
            j=j-1
        while (i >=0 ):
            x=int(a[i])+c
            c=x/2
            s=str(x%2)+s
            i=i-1
        while (j >=0 ):
            x=int(b[j])+c
            c=x/2
            s=str(x%2)+s
            j=j-1
        if c!=0:
           s='1'+s
        return s