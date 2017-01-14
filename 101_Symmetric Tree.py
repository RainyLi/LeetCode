# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isOpposite(self, roota, rootb):
        if roota==None and rootb==None:
            return True
        if roota==None:
            return False
        if rootb==None:
            return False
        if roota.val==rootb.val and self.isOpposite(roota.left, rootb.right) and self.isOpposite(roota.right, rootb.left):
            return True
        else:
            return False
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root == None:
            return True
        else:
            return self.isOpposite(root.left, root.right)