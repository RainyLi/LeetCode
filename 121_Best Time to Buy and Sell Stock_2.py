class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        benefit = 0

        length = len(prices)
        if length == 0:
            return 0
        curmin = prices[0]
        for i in range(1, length):
            diff = prices[i] - curmin
            if diff > benefit:
                benefit = diff
            elif diff < 0:
                curmin = prices[i]
        return benefit