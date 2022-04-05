class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        
        for(int n : nums)
        {
            n = abs(n);
            if(nums[n-1]>0)
                nums[n-1] *= -1;  //revisiting the number so making it negative
            else
                ans.push_back(n);
        }
        return ans;
    }
};