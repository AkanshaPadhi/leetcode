
class Solution:
    def calculate(self, s: str) -> int:
        stack = []
        num = 0
        sign = 1
        result = 0

        for i in range(len(s)):
            ch = s[i]

            if ch.isdigit():
                num = num * 10 + int(ch)

            elif ch == "+":
                result += sign * num
                num = 0
                sign = 1

            elif ch == "-":
                result += sign * num
                num = 0
                sign = -1

            elif ch == "(":
                stack.append(result)
                stack.append(sign)
                result = 0
                sign = 1

            elif ch == ")":
                result += sign * num
                num = 0

                result *= stack.pop()
                result += stack.pop()

            elif ch == " ":
                continue

        result += sign * num
        return result
