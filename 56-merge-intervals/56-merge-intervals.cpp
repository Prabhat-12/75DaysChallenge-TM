class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        if(intervals.size()==0)
        {
            return result;
        }
        vector<int> temp = intervals[0];
        
        for(auto i: intervals)
        {
            if(i[0]<=temp[1])
            {
                temp[1] = max(i[1],temp[1]);
            }
            else
            {
                result.push_back(temp);
                temp = i;
            }
        
        }  
          result.push_back(temp) ;
        return result;
    }
};