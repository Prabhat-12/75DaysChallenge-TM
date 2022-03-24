class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        // TC = O(N2) SC = O(1)
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        
        // TC = O(N) SC = O(N)
        // unordered_map <int,int> m;
        // for(int i=0;i<n;i++){
        //     int x=nums[i];
        //     int y=target - x;
        //     if(m.find(y) != m.end()){
        //         return {i,m[y]};
        //     }
        //     m[nums[i]] = i;
        // }
        
        // TC = O(NlogN) SC = O(N)
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++) v.push_back({nums[i],i});
        sort(v.begin(),v.end());
        int s=0,e=n-1;
        while(s<e){
            int sum = v[s].first + v[e].first; //first is representing number
            if(sum==target) return {v[s].second , v[e].second}; //second is rep. index
            else if(sum>target) e--;
            else s++;
        }
        return {-1,-1};
    }
};