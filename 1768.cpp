class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i;
        string word;
        string extra;
        if(word1.length() < word2.length()){
             i=word1.length();
             for(int k=word1.length();k<word2.length();k++){
                extra+=word2[k];
             }

        }
        else if(word1.length() > word2.length()) {
            i=word2.length();
            for(int k=word2.length();k<word1.length();k++){
                extra+=word1[k];
             }
        }
           else {
            i=word2.length(); 
        }
     for(int j=0;j<i;j++){
        word+=word1[j];
        word+=word2[j];
     }
     word+=extra;
     return word;
    }
};
