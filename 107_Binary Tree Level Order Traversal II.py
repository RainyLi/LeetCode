class Solution(object):
    def __init__(self):
        self.level = []

    def tranverse(self, root, x):
        if root == None:
            return
        if (len(self.level) - 1) < x:
            newList = []
            newList.append(root.val)
            self.level.insert(0, newList)
        else:
            self.level[(x+1)*(-1)].append(root.val)
        self.tranverse(root.left, x + 1)
        self.tranverse(root.right, x + 1)

    def levelOrderBottom(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        self.level = []
        self.tranverse(root, 0)
        return self.level
