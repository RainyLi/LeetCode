class Solution(object):
    def totalHammingDistance(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        w = 0
        for i in range(32):
            mask = 1 << i
            zero = 0
            one = 0
            for x in nums:
                if mask & x == 0:
                    zero = zero + 1
                else:
                    one = one + 1
            w = w + one * zero
        return w
