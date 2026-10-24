class Solution:
    def countDaysTogether(self, arriveAlice: str, leaveAlice: str, arriveBob: str, leaveBob: str) -> int:
        aa = list(map(int, arriveAlice.split("-")))
        la = list(map(int, leaveAlice.split("-")))
        ab = list(map(int, arriveBob.split("-")))
        lb = list(map(int, leaveBob.split("-")))

        am=max(aa[0],ab[0])
        if aa[0]==ab[0]:
            ad=max(aa[1],ab[1])
        elif am==aa[0]:
            ad=aa[1]
        else:
            ad=ab[1]

        lm=min(la[0],lb[0])
        if la[0]==lb[0]:
            ld=min(la[1],lb[1])
        elif lm==la[0]:
            ld=la[1]
        else:
            ld=lb[1]

        if (am, ad) > (lm, ld):
            return 0        
        if am==lm:
            return ld-ad+1

        count=0             
        i=am        
        while(i<=lm):
            if i==am:
                if i==1 or i==3 or i==5 or i==7 or i==8 or i==10 or i==12:
                    count+=31-ad+1
                elif i==2:
                    count+=28-ad+1
                else:
                    count+=30-ad+1
            elif i==lm:
                 count+=ld          
            else:
                if i==1 or i==3 or i==5 or i==7 or i==8 or i==10 or i==12:
                    count+=31
                elif i==2:
                    count+=28
                else:
                    count+=30    
            i+=1 
        return count       
