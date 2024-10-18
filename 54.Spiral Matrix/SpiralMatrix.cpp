//1.Leet Code Solution

//APPROCH-
//one of the most optimal solution of Spiral matrix in runtime 0 ms
//step by step Starting Row, Ending Row, Starting Col, Ending Col has been calculated keeping all conditions in mind

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int>ans;
//         int m=matrix.size();
//         int n=matrix[0].size();
//         int total_elements=m*n;

//         int startingRow=0;
//         int endingRow=m-1;
//         int startingCol=0;
//         int endingCol=n-1;
//         int count=0;

//         while((count<total_elements) && (startingRow<=endingRow) && (startingCol<=endingCol))
//         {
//             //printng starting row
//             for(int i=startingCol; i<=endingCol && (startingRow<=endingRow) && (startingCol<=endingCol);i++)
//             {
//                 ans.push_back(matrix[startingRow][i]);
//                 count++;
//             }
//             startingRow++;

//              //printng ending col
//             for(int i=startingRow; i<=endingRow && (startingRow<=endingRow) && (startingCol<=endingCol); i++)
//             {
//                 ans.push_back(matrix[i][endingCol]);
//                 count++;
//             }
//             endingCol--;

//              //printng ending Row
//             for(int i=endingCol; i>=startingCol && (startingRow<=endingRow) && (startingCol<=endingCol); i--)
//             {
//                 ans.push_back(matrix[endingRow][i]);
//                 count++;
//             }
//             endingRow--;

//              //printng starting Col
//             for(int i=endingRow; i>=startingRow && (startingRow<=endingRow) && (startingCol<=endingCol); i--)
//             {
//                 ans.push_back(matrix[i][startingCol]);
//                 count++;
//             }
//             startingCol++;
//         }
//         return ans;
//     }
// };