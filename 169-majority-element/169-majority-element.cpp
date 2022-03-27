class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
	    int majorityNum = nums[0];
	
	for(int i=1;i<n;i++)
	{
	    if(majorityNum == nums[i])
	    {
	        count++;
	    }
	    else
	    {
	        count--;
	        if(count == 0)
	        {
	            majorityNum=nums[i];
	            count++;
	        }
	    }
	}
	return majorityNum;
    }
};