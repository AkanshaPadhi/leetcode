class RandomizedSet {
public:
unordered_set<int> st;
vector<int> v;
unordered_map<int,int> m;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
       if(st.count(val)==0){
        st.insert(val);
        v.push_back(val);
        m[val]=v.size()-1;
       return true;
        m[last]=index;
            m.erase(val);
       }
       else return false;
    }
    
    bool remove(int val) {
        if(st.count(val)!=0){
            st.erase(val);
            int index=m[val];
            int last=v[v.size()-1];
            v[index]=last;
           
            v.pop_back();
            return true;
        }
        else return false;
    }
    
    int getRandom() {
        if(v.size()==0)
        return 0;
        int randIndex=rand()%v.size();
        return v[randIndex];
    }
};
