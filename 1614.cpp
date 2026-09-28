class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        vector<int> arr;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
            count++;
            if(s[i]==')'){
            arr.push_back(count);
            count--;
            }
        }
        if(!arr.empty())
        return *max_element(arr.begin(),arr.end());
        else return 0;
    }
};
