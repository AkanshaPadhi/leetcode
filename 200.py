class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        rows = len(grid)
        cols = len(grid[0])
        visited = set()
        count = 0

        for i in range(rows):
            for j in range(cols):

                if grid[i][j] == '1' and (i, j) not in visited:
                    count += 1
                    stack = [(i, j)]
                    visited.add((i, j))

                    while stack:
                        x, y = stack.pop()

                        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

                        for dx, dy in directions:
                            nx = x + dx
                            ny = y + dy

                            if (0 <= nx < rows and
                                0 <= ny < cols and
                                grid[nx][ny] == '1' and
                                (nx, ny) not in visited):

                                stack.append((nx, ny))
                                visited.add((nx, ny))

        return count
