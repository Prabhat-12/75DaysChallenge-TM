class Solution {
public:
    int jump(vector<int>& nums) {
        
    int n = nums.size();   
    int currReach = 0;
    int currMax = 0;
    int jumps = 0;
	
	for(int i=0; i<n-1; i++)
	{
	    if(i+nums[i] > currMax)
	    {
	        currMax = i + nums[i];
	    }
	    
	    if(i==currReach)
	    {
	        jumps++;
	        currReach = currMax;
	    }
	}
        return jumps;
    }
};