class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:

        n = len(matrix)

        for layer in range(n // 2):

            end = n - 1 - layer

            for i in range(layer, end):

                # Save the top element
                temp = matrix[layer][i]

                # left -> top
                matrix[layer][i] = matrix[end - (i - layer)][layer]

                # bottom -> left
                matrix[end - (i - layer)][layer] = matrix[end][end - (i - layer)]

                # right -> bottom
                matrix[end][end - (i - layer)] = matrix[i][end]

                # top -> right
                matrix[i][end] = temp
