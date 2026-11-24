# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: TreeNode | None) -> list[list[int]]:
        if root is None:
            return []
        result=[]
        q=deque([root])
        odd=True
        while q:
            size=len(q)
            length=[]
            odd=not odd
            for i in range(size):
                curr=q.popleft()
                length.append(curr.val)
                if curr.right:
                    q.append(curr.right)
                if curr.left:
                    q.append(curr.left) 
            if odd is False:
                length.reverse()  
            result.append(length)
        return result            




