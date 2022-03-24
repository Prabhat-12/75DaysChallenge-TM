class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        
        int l = 0;
        int r = 0;
        
        while(r < n)
        {
            if(nums[r]==0)
            {
                r++;
            }
            else
            {
                int temp = nums[l];
                nums[l] = nums[r];
                nums[r] = temp;
                l++;
                r++;
            }
        }
    }
};