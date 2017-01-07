# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """

        if head == None:
            return head
        x = head.val
        start = ListNode(x)
        end = start
        node = head.next
        while node != None:
            if x != node.val:
                x = node.val
                newNode = ListNode(x)
                end.next = newNode
                end = newNode
            node = node.next
        return start