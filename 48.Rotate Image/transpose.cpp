// #include<iostream>
// using namespace std;
// int main()
// {
//     int r;
//     cin>>r;
//     int c;
//     cin>>c;
//     int arr[r][c];
//     int trans[c][r]; //separate array(no inplace arrangement)
//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"The given matrix is: "<<endl;
//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     //code for transpose
//     for(int i=0; i<r; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             trans[j][i]=arr[i][j];
//         }
//     }
//     //display transpose
//     cout<<"Transpose matrix is: "<<endl;
//     for(int i=0; i<c; i++)
//     {
//         for(int j=0; j<r; j++)
//         {
//             cout<<trans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


//better method for transpose-
//Here you will process only the upper right angled triangle part for swapping

#include<iostream>
using namespace std;

void printArr(int arr[][100],int r,int c)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[][100],int r,int c)
{
     //transpose
    for(int i=0; i<r; i++)
    {
        for(int j=i; j<c; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Given array is: "<<endl;
    printArr(arr,r,c);
   
    cout<<"Transpose is: "<<endl;
    transpose(arr,r,c);
    printArr(arr,r,c);
}