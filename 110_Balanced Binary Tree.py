# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def check(self, root, n):
        if root==None:
            return n-1
        a=self.check(root.left, n+1)
        b=self.check(root.right, n+1)
        if a==-1 or b==-1:
            return -1
        elif abs(a-b)>1:
            return -1
        else:
            return max(a, b)
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root==None:
            return True
        a=self.check(root.left, 1)
        b=self.check(root.right, 1)
        if (a==-1 or b==-1):
            return False
        if abs(a-b)>1:
            return False
        return True