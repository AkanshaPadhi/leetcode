# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: TreeNode | None) -> bool:
        def check(node,mini,maxi):
            if node is None:
                return True
            if node.val<=mini or node.val>=maxi:
                return False
            left=check(node.left,mini,node.val)
            right=check(node.right,node.val,maxi)
            return left and right 
        return check(root, float('-inf'), float('inf'))
