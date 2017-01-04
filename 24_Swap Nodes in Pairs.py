class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None
class Solution(object):
    def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        start=ListNode(0)
        start.next=head
        p1=start
        while(p1!=None):
            p2=p1.next
            if p2==None:
                return start.next
            p3=p2.next
            if p3==None:
                return start.next
            p1.next=p3
            p2.next=p3.next
            p3.next=p2
            p1=p2
        return start.next
