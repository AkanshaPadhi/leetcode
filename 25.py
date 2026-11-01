# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: ListNode | None, k: int) -> ListNode | None:
        dummy=ListNode(0)
        dummy.next=head
        prev=dummy 

        while True:
            kth=prev
            for i in range(k):
                kth=kth.next
                if kth==None:
                    return dummy.next

            curr=prev.next
            for i in range(k-1):
                
                next_node=curr.next
                curr.next=next_node.next
                next_node.next=prev.next
                prev.next=next_node
            prev=curr    
