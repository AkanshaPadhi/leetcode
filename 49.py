class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        group=[]
        Dict=[]

        for word in strs :
            count={}
            for i in word :
                if i in count:
                    count[i]+=1
                else :
                    count[i]=1

            for i in range(len(Dict)) :
                if Dict[i]==count:
                    group[i].append(word)
                    break
            else:
                Dict.append(count)
                group.append([word])
        return group        
