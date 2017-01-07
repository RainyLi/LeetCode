class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        list=[0,1,2]
        for i in range(3,n+1):
            x=list[i-1]+list[i-2]
            list.append(x)
        return list[n]