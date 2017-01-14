# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def __init__(self):
        self.level = []

    def tranverse(self, root, x):
        if root == None:
            return
        if (len(self.level) - 1) < x:
            newList = []
            newList.append(root.val)
            self.level.append(newList)
        else:
            self.level[x].append(root.val)
        self.tranverse(root.left, x + 1)
        self.tranverse(root.right, x + 1)

    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        self.level = []
        self.tranverse(root, 0)
        return self.level
