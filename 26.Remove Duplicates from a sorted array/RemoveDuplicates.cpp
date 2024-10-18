//1.Task-
//Remove Duplicates from sorted array and return k(the number of unique elements)

//2.Approch-
//We will use Two pointer approch here.

//3.Detailed Code-

#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int removeDuplicates(int arr[],int n)
{
    int j=0; int i=1;
    while(i<n)
    {
        if(arr[i]==arr[j])
        {
            i++;
        }
        else{
            j++;
            arr[j]=arr[i];
            i++;
        }
    }
    return j+1;
}

int main()
{
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array in sorted order(Ascending order):"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The number of unique elements of the array is:"<<removeDuplicates(arr,n);
    cout<<endl;
    
}

//4.Leet Code Solution(runtime 0 ms)-
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int n=nums.size();
//         int j=0; int i=1;
//         while(i<n)
//         {
//             if(nums[j]==nums[i])
//             {
//                 i++;
//             }
//             else{
//                 j++;
//                 nums[j]=nums[i];
//                 i++;
//             }
//         }
//         return j+1; 
//     }
// };


