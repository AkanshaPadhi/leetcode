class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        mapp={}
        for i in range(len(t)) :
            if t[i] in mapp:
                if mapp[t[i]]==s[i] :
                    continue
                else :
                    return False
            else :
                mapp[t[i]]=s[i] 

        mappS={}  
        for i in range(len(s)) :
            if s[i] in mappS:
                if mappS[s[i]]==t[i] :
                    continue
                else :
                    return False
            else :
                mappS[s[i]]=t[i]         

        return True              
