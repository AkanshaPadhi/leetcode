class Solution {
public:
    int strStr(string haystack, string needle) {
        string word;
        int k;
        int index;
        for(int i=0;i<haystack.length();i++){
            index=i;
            k=0;
            for(int j=i;j<needle.length()+i;j++){
              if(j==haystack.length())
              return -1;   
              if(needle[k]==haystack[j]){
                word+=haystack[j];
                if(word==needle)
                return index;
                 k++;
              }
              else {
                word.clear();
                break;
              }
            }
        }
        return -1;
    }
};
