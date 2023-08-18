class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> ans;
        int count=0,row=matrix.size(),col=matrix[0].size(),total=row*col;
        int startingRow=0,endingCol=col-1,endingRow=row-1,startingCol=0;
    
        while(count<total)
        {
            for(int index=startingCol;count<total && index<=endingCol;index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            for(int index=startingRow;count<total && index<=endingRow;index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            for(int index=endingCol;count<total && index>=startingCol;index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            for(int index=endingRow;count<total && index>=startingRow;index--)
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};