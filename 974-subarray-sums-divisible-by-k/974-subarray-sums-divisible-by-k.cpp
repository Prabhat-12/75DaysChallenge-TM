class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> m;
        int sum = 0, res = 0, n = nums.size();
        m[0] = 1;
        for(int i: nums)
        {
            sum += i;
            int rem = sum % k;
            if(rem < 0) 
                rem += k;
            
            if(m.find(rem) != m.end())
            {
                res += m[rem];
            }
            m[rem]++;
        }
        return res;
    }
};