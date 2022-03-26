class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        
        int i=0;
        int j=n-1;
        
        vector<int> ans(n);
        
         for(int k=n-1; k>=0;k--)
        {
            if(abs(nums[j]) > abs(nums[i]))
            {
                ans[k] = nums[j] * nums[j];
                j--;
            }
            else 
            {
                ans[k] = nums[i] * nums[i];
                i++;
            }
         }
        return ans;
    }
};

