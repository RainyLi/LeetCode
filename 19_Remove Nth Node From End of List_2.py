#algorithm2: search one, a distance of n between two pointers
# %32.76
class ListNode(object):
     def __init__(self, x):
         self.val = x
         self.next = None

     def append(self,x):
         node=self
         while node.next!=None:
             node=node.next
         newNode=ListNode(x)
         node.next=newNode

     def printlist(self):
         node=self
         if node==None:
             return
         while node.next!=None:
             print(str(node.val)+"\n")
             node=node.next
         print(str(node.val) + "\n")


class Solution(object):
    def __init__(self):
        pass

    def removeNthFromEnd(self, head, n):
        first=head
        x=n
        while x>0:
            first=first.next
            x=x-1
        second=head
        if first==None:
            return head.next
        while first.next!=None:
            first=first.next
            second=second.next
        second.next=second.next.next
        return head


if __name__ == "__main__":
    S=Solution()
    head=ListNode(0)
    for i in range(1,1):
        head.append(i)
    head=S.removeNthFromEnd(head,1)
    head.printlist()




