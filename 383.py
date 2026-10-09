class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        count={}
        for letter in magazine :
            if letter in count :
                count[letter]+=1
            else :
                count[letter]=1
        for letter in ransomNote :
            if letter in count:
                if count[letter]==0 :
                    return False
                count[letter]-=1
            else :
                return False
        return True        
