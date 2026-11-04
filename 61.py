
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:

        if not head or not head.next:
            return head

        tail = head
        length = 1

        # Find length and last node
        while tail.next:
            tail = tail.next
            length += 1

        # Actual rotations needed
        k = k % length

        if k == 0:
            return head

        # Connect tail to head (make circular)
        tail.next = head

        # Find the new tail
        steps = length - k
        new_tail = head

        for i in range(steps - 1):
            new_tail = new_tail.next

        # Break the circle
        new_head = new_tail.next
        new_tail.next = None

        return new_head
