class Solution(object):
    def ones(self, n):
        w = 0
        while (n):
            w += 1
            n &= n - 1
        return w

    def hammingDistance(self, x, y):
        return self.ones(x ^ y)
