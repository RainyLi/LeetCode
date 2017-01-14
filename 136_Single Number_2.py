class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        length=len(nums)
        a=0
        for i in range(0, length):
            a=a^nums[i]
        return a