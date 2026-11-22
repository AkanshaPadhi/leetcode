class Solution:
    def averageOfLevels(self, root: TreeNode | None) -> list[float]:
        if root is None:
            return []
        result=[]
        q=deque([root])
        while q:
            size=len(q)
            total=0
            for i in range(size):
                node=q.popleft()
                total+=node.val
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            result.append(total/size)
        return result                
