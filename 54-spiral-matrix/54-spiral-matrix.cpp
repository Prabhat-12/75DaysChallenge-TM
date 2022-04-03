class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
    
    int n = mat.size();
    int m = mat[0].size();
    int minRow = 0;
    int minCol = 0;
    int maxRow = n-1;
    int maxCol = m-1;
    int total = n*m;
    int cnt = 0;
    vector<int> ans;
    
    while(minRow<=maxRow && minCol<=maxCol && cnt<total)
    {
        for(int i=minCol ; i<=maxCol && cnt<total ; i++ )
        {
          ans.push_back(mat[minRow][i]);
          cnt++;
        }
        minRow++;
        
        for(int i=minRow ; i<=maxRow && cnt<total; i++)
        {
            ans.push_back(mat[i][maxCol]);
            cnt++;
        }
        maxCol--;
        
        for(int i=maxCol ; i>=minCol && cnt<total ; i--)
        {
            ans.push_back(mat[maxRow][i]);
            cnt++;
        }
        maxRow--;
        
        for(int i=maxRow ; i>=minRow && cnt<total ; i--)
        {
            ans.push_back(mat[i][minCol]);
            cnt++;
        }
        minCol++;
    }
    return ans;
}
};