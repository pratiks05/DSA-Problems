//Approch- Apply Binary search on 2D matrix
//1D se 2D ka conversion k liye i=mid/col and j=mid%col

//Leet Code Solution-

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=matrix.size();
//         int col=matrix[0].size();
//         int n=row*col;
//         int s=0;
//         int e=n-1;
//         int mid=s+(e-s)/2;
//         while(s<=e)
//         {
//             int rowIndex=mid/col;
//             int colIndex=mid%col;
//             int currentNum=matrix[rowIndex][colIndex];
//             if(currentNum==target)
//             {
//                 return true;
//             }
//             else if(currentNum<target)
//             {
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
//             mid=s+(e-s)/2;
//         }
//         return false;
//     }
// };