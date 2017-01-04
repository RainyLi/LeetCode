class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        length=len(nums)
        i=0
        while i<length:
            if nums[i]==val:
                nums.pop(i)
                length=length-1
            else:
                i=i+1
        return length