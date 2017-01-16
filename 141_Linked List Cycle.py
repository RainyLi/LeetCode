# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        dic={}
        if head==None:
            return False
        Node=head.next
        while Node!=None:
            if Node in dic:
                return True
            else:
                dic[Node]=True
            Node=Node.next
        return False