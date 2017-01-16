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
        if head==None:
            return False
        Node1=head
        Node2=head.next
        while Node2!=None and Node1!=Node2:
            Node1=Node1.next
            if Node2.next==None:
                return False
            else:
                Node2=Node2.next.next
        if Node2==None:
            return False
        else:
            return True