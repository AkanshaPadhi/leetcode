# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: ListNode | None, n: int) -> ListNode | None:
        dummy = ListNode(0)
        dummy.next = head

        slow = dummy
        fast = dummy

        # Move fast n+1 steps ahead
        for i in range(n + 1):
            fast = fast.next

        # Move both pointers until fast reaches None
        while fast:
            slow = slow.next
            fast = fast.next

        # Remove the nth node from the end
        Next_node = slow.next.next
        slow.next = Next_node

        return dummy.next
