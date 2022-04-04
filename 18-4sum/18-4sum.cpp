class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        
        for (int i = 0; i  < n-3; ++i)
        {
            if (i &&nums[i] == nums[i - 1]) 
            {
                continue;
            }
            for (int j = i + 1; j < n-2; ++j) 
            {
                if (j != i + 1 && nums[j] == nums[j - 1]) 
                {
                    continue;
                }
                
                const auto& total = target - nums[i] - nums[j];
                int st = j + 1, en = n - 1;
                
                while (st < en) 
                {
                    if (nums[st] + nums[en] == total) 
                    {
                        result.push_back({nums[i], nums[j], nums[st], nums[en]});
                        ++st, --en;
                        while (st < en && nums[st] == nums[st - 1]) 
                        {
                            ++st;
                        }
                        while (st < en && nums[en] == nums[en + 1]) 
                        {
                            --en;
                        }
                    } 
                    else 
                    {
                        if (nums[st] + nums[en] > total) 
                        {
                            --en;
                        } 
                        else 
                        {
                            ++st;
                        }
                    }
                }
            }
        }
        return result;
    }
};