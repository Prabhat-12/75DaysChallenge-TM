class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        for(int x: arr)
        {
            m[x] += 1;
        }
        set<int> st;
        for(auto it: m)
        {
            if(st.count(it.second) > 0)
                return false;
            else st.insert(it.second);
        }
        return true;
    }
};