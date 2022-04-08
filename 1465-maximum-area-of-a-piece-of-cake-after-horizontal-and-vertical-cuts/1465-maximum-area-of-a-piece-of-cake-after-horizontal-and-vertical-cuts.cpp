class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int m = horizontalCuts.size();
        int n = verticalCuts.size();
        
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        int max_h = max(h-horizontalCuts[m-1], horizontalCuts[0]);
        int max_v = max(w-verticalCuts[n-1], verticalCuts[0]);
        
        for (int i = 0; i < m-1; i++) {
            max_h = max(max_h, (horizontalCuts[i+1]-horizontalCuts[i]));
        }
        for (int i = 0; i < n-1; i++) {
            max_v = max(max_v, (verticalCuts[i+1]-verticalCuts[i]));
        }
        return (long)max_h * max_v % 1000000007;
    }
};

