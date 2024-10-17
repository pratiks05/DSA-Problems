//1.Approch-

//The array must be sorted in this case then only we can apply this approch.
//run time of this approch is: 109 ms

//2.Detailed Code-

#include<iostream>
#include <algorithm> //use this library to sort the array
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sortArray(int arr[], int size) {
    std::sort(arr, arr + size); // Sorts array in ascending order
}
int findDuplicate(int arr[],int n) {
        for(int i=0; i<n; i++)
        {
            if(arr[i]==arr[i+1])
            {
                return arr[i];
            }
        }
        return -1;
}


int main()
{
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sortArray(arr,n);
    cout<<"The given array is:"<<endl;
    printArray(arr,n);
    cout<<endl;
    cout<<"The duplicate element is:"<<findDuplicate(arr, n);
}

  

//3.LEET Code Solution
//sorting done using vector-

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i=0; i<nums.size(); i++)
//         {
//             if(nums[i]==nums[i+1])
//             {
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
// };

