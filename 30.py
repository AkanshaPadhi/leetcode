class Solution:
    def findSubstring(self, s: str, words: List[str]) -> List[int]:

        left = 0
        a = 0
        l = len(words[0])
        ans = []

        word_set = set(words)

        needed = {}
        for word in words:
            if word in needed:
                needed[word] += 1
            else:
                needed[word] = 1

        while left + len(words) * l <= len(s):

            a = left

            # fresh copy of the available word counts
            lit = needed.copy()

            for i in range(len(words)):

                temp = s[a:a+l]

                if temp not in word_set:
                    left += 1
                    break

                if temp not in lit or lit[temp] == 0:
                    left += 1
                    break

                lit[temp] -= 1
                a += l

            else:
                # All words were successfully used
                ans.append(left)
                left += 1

        return ans
        
