class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        length=len(nums)
        dic={}
        for i in range(0, length):
            if nums[i] not in dic:
                dic[nums[i]]=True
            else:
                del dic[nums[i]]
        for i in dic:
            return i