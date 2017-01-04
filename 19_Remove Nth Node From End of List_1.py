#algorithm1: search twice, the first time find the total length
# %42.58
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

        #length
        counter=1
        node=head
        while node.next!=None:
            node=node.next
            counter=counter+1
        if n==counter:
            return head.next
        else:
            n = counter + 1 - n
            i = 2  # the node which current point to
            former = head
            current = former.next
            while i < n:
                former = current
                current = current.next
                i = i + 1
            former.next = current.next
            return head


if __name__ == "__main__":
    S=Solution()
    head=ListNode(0)
    for i in range(1,1):
        head.append(i)
    head=S.removeNthFromEnd(head,1)
    head.printlist()




