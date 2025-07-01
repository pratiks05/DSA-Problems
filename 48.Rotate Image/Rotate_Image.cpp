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



#include <iostream>
using namespace std;

int main()
{
    int row, col;

    // Take number of rows and columns as input
    cout << "Enter number of rows: "; 
    cin >> row;

    cout << "Enter number of columns: "; 
    cin >> col;

    int matrix[row][col];
    int transpose[col][row ];

    // Input the elements of the matrix
    cout << "Enter elements of the matrix:" << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    // Perform transpose
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the transposed matrix
    cout << "Transposed matrix:" << endl;
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            cout << transpose[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}
