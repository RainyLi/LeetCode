# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def minDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root==None:
            return 0
        a=self.minDepth(root.right)
        b=self.minDepth(root.left)
        if (a==0 and b!=0):
            return b+1
        if (a!=0 and b==0):
            return a+1
        return min(a+1, b+1)