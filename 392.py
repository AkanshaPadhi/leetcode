class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        a=-1
        for i in range(len(s)) :  
         if(t[a+1:].find(s[i])!=-1) :
          a=a+1+t[a+1:].find(s[i])   
         else : 
            return False
        return True
             
           
