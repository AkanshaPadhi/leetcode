class Solution:
    def isHappy(self, n: int) -> bool:
        seen=set()
        while n not in seen:
            if n==1:
                return True
            seen.add(n)
            num=n
            n=0
            while num>0:
                n+=(num%10)**2
                num=num//10
        return False    
