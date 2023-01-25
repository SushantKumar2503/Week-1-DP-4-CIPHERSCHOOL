class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int startRow=0,endRow=matrix.size()-1;
        int startCol=0,endCol=matrix[0].size()-1;
         vector<int>ans;
        while(startRow<=endRow && startCol<=endCol){
            //first row
            for(int i=startCol;i<=endCol;i++){
                ans.push_back(matrix[startRow][i]);
            }
            startRow++;
            //endColumn
            for(int i=startRow;i<=endRow;i++){
            ans.push_back(matrix[i][endCol]);
            }
            endCol--;
            //endRow;
            if(endRow>=startRow){
                for(int i=endCol;i>=startCol;i--){
                    ans.push_back(matrix[endRow][i]);
                }
                endRow--;
            }
            //startCol
            if(endCol>=startCol){
                for(int i=endRow;i>=startRow;i--){
                    ans.push_back(matrix[i][startCol]);
                }
                startCol++;
            }
        }
        return ans;
    }
};