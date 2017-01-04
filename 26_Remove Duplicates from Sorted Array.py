class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        p1=0
        p2=0
        length=len(nums)
        if length==0:
            return 0
        while 1:
            x=nums[p2]
            while p2<length and nums[p2]==x:
                p2=p2+1
            nums[p1]=x
            p1=p1+1
            if p2==length:
                break
        return p1