class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        int minRow=0;
        int minCol=0;
        int maxRow=n-1;
        int maxCol=m-1;
        int total=n*m;
        int count=0;
        vector<int>ans;
        
        while(minRow<=maxRow and minCol<=maxCol and count<total){
            for(int i=minCol;i<=maxCol and count<total;i++){
               ans.push_back(matrix[minRow][i]); 
                count++;
            }
            minRow++;
            
            for(int i=minRow;i<=maxRow and count<total;i++){
                ans.push_back(matrix[i][maxCol]);
                count++;
            }
            maxCol--;
            
            for(int i=maxCol;i>=minCol and count<total;i--){
                ans.push_back(matrix[maxRow][i]);
                count++;
            }
            maxRow--;
            
            for(int i=maxRow;i>=minRow and count<total;i--){
                ans.push_back(matrix[i][minCol]);
                count++;
            }
            minCol++;
        }
        
        return ans;
    }
};