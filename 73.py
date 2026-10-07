class Solution:
    def setZeroes(self, matrix: list[list[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """

        rows = len(matrix)
        cols = len(matrix[0])

        zeros = []

        # First collect all ORIGINAL zero positions
        for i in range(rows):
            for j in range(cols):
                if matrix[i][j] == 0:
                    zeros.append((i, j))

        # Process each zero
        for i, j in zeros:

            # Go left
            for col in range(j, -1, -1):
                matrix[i][col] = 0

            # Go right
            for col in range(j, cols):
                matrix[i][col] = 0

            # Go up
            for row in range(i, -1, -1):
                matrix[row][j] = 0

            # Go down
            for row in range(i, rows):
                matrix[row][j] = 0
