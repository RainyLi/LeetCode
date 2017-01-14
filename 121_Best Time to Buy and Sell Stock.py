class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        m=0
        length=len(prices)
        list=[]
        i=length-1
        while(i>=0):
            if i==length-1:
                list.insert(0,prices[i])
            elif prices[i]<list[0]:
                m= max(list[0]-prices[i], m)
                list.insert(0, list[0])
            else:
                list.insert(0, prices[i])
            i=i-1
        return m