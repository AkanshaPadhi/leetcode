# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode | None) -> int:
        maxi = float('-inf')

        def findMax(root):
            nonlocal maxi

            if root is None:
                return 0

            left = max(0, findMax(root.left))
            right = max(0, findMax(root.right))

            maxi = max(maxi, root.val + left + right)

            return root.val + max(left, right)

        findMax(root)
        return maxi 
