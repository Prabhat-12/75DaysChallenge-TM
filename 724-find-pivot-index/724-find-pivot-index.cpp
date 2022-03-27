class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftSum = 0;
        int totalSum =0;
        
        for(int i: nums)
            totalSum += i;
     
        for(int i=0;i<n;i++)
        {
            totalSum -= nums[i];   
           
            if(leftSum == totalSum)
            {
            return i;
            }
            
            leftSum += nums[i];
        }
     return -1;   
    }
};