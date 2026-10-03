class Solution:
    def minWindow(self, s: str, t: str) -> str:

        need = {}

        for ch in t:
            if ch in need:
                need[ch] += 1
            else:
                need[ch] = 1

        window = {}

        left = 0
        formed = 0
        required = len(need)

        ans = ""

        for right in range(len(s)):

            # Add s[right] to the window
            if s[right] in window:
                window[s[right]] += 1
            else:
                window[s[right]] = 1

            # Check whether this character requirement is now satisfied
            if s[right] in need and window[s[right]] == need[s[right]]:
                formed += 1

            # Window contains everything required
            while formed == required:

                # Check if this is the shortest valid window
                if ans == "" or right - left + 1 < len(ans):
                    ans = s[left:right+1]

                # Remove s[left] while shortening the window
                window[s[left]] -= 1

                if s[left] in need and window[s[left]] < need[s[left]]:
                    formed -= 1

                left += 1

        return ans
        
