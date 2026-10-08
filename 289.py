class Solution:
    def gameOfLife(self, board: list[list[int]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        rows = len(board)
        cols = len(board[0])

        old = [row.copy() for row in board]

        for i in range(rows):
            for j in range(cols):

                live = 0

                # Check all 8 neighbours
                for x in range(i - 1, i + 2):
                    for y in range(j - 1, j + 2):

                        # Don't count the cell itself
                        if x == i and y == j:
                            continue

                        # Don't go outside the matrix
                        if x < 0 or x >= rows or y < 0 or y >= cols:
                            continue

                        if old[x][y] == 1:
                            live += 1

                # Apply Game of Life rules
                if live <= 1:
                    board[i][j] = 0

                elif live == 2:
                    board[i][j] = old[i][j]

                elif live == 3:
                    board[i][j] = 1

                else:
                    board[i][j] = 0
