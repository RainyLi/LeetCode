# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None
    def append(self, x):
        node=self
        while(node.next!=None):
            node=node.next
        newNode=ListNode(x)
        node.next=newNode

class Solution(object):
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        p=l=ListNode(0)
        while(l1!=None and l2!=None):
            if l1.val<l2.val:
                newNode=ListNode(l1.val)
                p.next=newNode
                p=newNode
                l1=l1.next
            else:
                newNode=ListNode(l2.val)
                p.next = newNode
                p = newNode
                l2=l2.next
        if l1!=None:
            p.next=l1
        elif l2!=None:
            p.next=l2
        return l.next
