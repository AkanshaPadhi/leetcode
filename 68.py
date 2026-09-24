class Solution:
    def fullJustify(self, words: list[str], maxWidth: int) -> list[str]:
        answer = []
        i = 0

        while i < len(words):

            # Find how many words fit in this line
            line = []
            lineLength = 0

            while i < len(words):
                if lineLength + len(words[i]) + len(line) > maxWidth:
                    break

                line.append(words[i])
                lineLength += len(words[i])
                i += 1

            # Last line
            if i == len(words):
                current = " ".join(line)
                current += " " * (maxWidth - len(current))
                answer.append(current)
                break

            # Only one word in the line
            if len(line) == 1:
                current = line[0] + " " * (maxWidth - len(line[0]))
                answer.append(current)
                continue

            # Normal justified line
            totalSpaces = maxWidth - lineLength
            gaps = len(line) - 1

            spaces = totalSpaces // gaps
            extra = totalSpaces % gaps

            current = ""

            for j in range(len(line) - 1):
                current += line[j]
                current += " " * spaces

                if j < extra:
                    current += " "

            current += line[-1]

            answer.append(current)

        return answer
