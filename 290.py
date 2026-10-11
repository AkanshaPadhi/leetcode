class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()
        if len(pattern) != len(words):
            return False
        mapp = {}
        reverse = {}
        for i in range(len(pattern)):
            if pattern[i] in mapp:
                if mapp[pattern[i]] != words[i]:
                    return False
            else:
                mapp[pattern[i]] = words[i]

            if words[i] in reverse:
                if reverse[words[i]] != pattern[i]:
                    return False
            else:
                reverse[words[i]] = pattern[i]
        return True
