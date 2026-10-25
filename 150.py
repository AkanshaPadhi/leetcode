class Solution:
    def evalRPN(self, tokens: list[str]) -> int:
        stack=[]
        for token in tokens:
            if token not in ["+","-","*","/"]:
                stack.append(int(token))
            else :
                b=stack.pop()
                a=stack.pop()
                if token=="+":
                    ans=a+b 
                elif token=="-":
                    ans=a-b
                elif token=="*":
                    ans=a*b
                else :
                    ans=int(a/b)
                stack.append(ans)    
        return stack[-1]                        

