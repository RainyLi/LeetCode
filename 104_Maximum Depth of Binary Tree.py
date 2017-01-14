# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    max=0
    def tranverse(self, root, depth):
        if root==None:
            return
        self.tranverse(root.left, depth+1)
        self.tranverse(root.right, depth+1)
        if depth>self.max:
            self.max=depth
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.max=0
        self.tranverse(root, 1)
        return self.max