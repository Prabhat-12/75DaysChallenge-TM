class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int Sum =0;
        
        for(int i: nums)
            Sum += i;
     
        for(int i=0;i<n;i++)
        {
            Sum -= nums[i];   
           
            if(l == Sum)
            {
            return i;
            }
            
            l += nums[i];
        }
     return -1;   
    }
};