# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def hasPathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: bool
        """
        if root==None:
            return False
        if (root.left==None and root.right!=None):
            return self.hasPathSum(root.right, sum-root.val)
        if (root.right==None and root.left!=None):
            return self.hasPathSum(root.left, sum-root.val)
        if (root.right==None and root.left==None):
            return sum==root.val
        return self.hasPathSum(root.left, sum-root.val) or self.hasPathSum(root.right, sum-root.val)