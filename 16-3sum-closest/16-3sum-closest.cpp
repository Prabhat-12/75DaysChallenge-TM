class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int minDiff = INT_MAX;
        int result = 0;
        
        for(int i=0;i<n;i++)
        {
            int j = i+1;
            int k = n-1;
            
            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==target)
                {
                     return target;   
                }
                else if(sum>target)
                {
                    k--;
                }
                else
                {
                    j++;
                }
                
                if(minDiff > abs(target-sum))
                {
                    minDiff = abs(target-sum);
                    result = sum;
                }
            }
        }
        return result;
    }
};