class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: void Do not return anything, modify nums1 in-place instead.
        """
        len1 = len(nums1)
        len2 = len(nums2)

        dis1 = len1 - m
        dis2 = len2 - n

        while (dis1):
            nums1.pop()
            dis1 = dis1 - 1

        while (dis2):
            nums2.pop()
            dis2 = dis2 - 1

        i = 0
        j = 0
        lengthNums1 = m
        while i <= lengthNums1 and j < n:
            if i < lengthNums1 and nums1[i] < nums2[j]:
                i = i + 1
            else:
                nums1.insert(i, nums2[j])
                i = i + 1
                j = j + 1
                lengthNums1 = lengthNums1 + 1