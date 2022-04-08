class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int result = 0;
        map<int,int> m;
        for(int i: nums)
        {
            m[i]++;
        }
        
        for(auto j: m)
        {
            if(k==0)
            {
                if(j.second >= 2)
                {
                     result++;   
                }
            }
            else
            {
                if(m.find(j.first-k) != m.end())
                {
                    result++;
                }
            }
        }
        return result;
    }
};