//APPROCH-

//Simply write the code for transpose first
//once the matrix is transposed then reverse eachbof the row
//you need to reverse the first and last element of the matrix only middle one will remain the same



// LEET CODE SOlution-

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n=matrix.size();

//         //Transpose ka Code
//         for(int i=0; i<n; i++)
//         {
//             for(int j=i; j<matrix[i].size(); j++)
//             {
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }

//         //Reverse ka Code
//         for(int i=0; i<n; i++)
//         {
//             reverse(matrix[i].begin(),matrix[i].end());
//         }

//     }
// };