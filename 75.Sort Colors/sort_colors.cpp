//Detailed Solution with user input-

#include<iostream>
using namespace std;
void printArr(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sort_colors(int arr[],int n)
{
    int index=0;
    int left=0;
    int right=n-1;
    while(index<=right)
    {
        if(arr[index]==0)
        {
            swap(arr[index],arr[left]);
            left++;
            index++;
        }
        else if(arr[index]==2)
        {
            swap(arr[index],arr[right]);
            right--;
        }
        else{
            index++;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array(0,1 or 2):";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort_colors(arr,n);
    cout<<"The output array is"<<endl;
    printArr(arr,n);
    return 0;


}

// LEET CODE SOLUTION-

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n=nums.size();
//         int index=0;
//         int left=0;
//         int right=n-1;
//         while(index<=right)
//         {
//             if(nums[index]==0)
//             {
//                 swap(nums[index],nums[left]);
//                 left++;
//                 index++;
//             }
//             else if(nums[index]==2)
//             {
//                 swap(nums[index],nums[right]);
//                 right--;
//             }
//             else{
//                 index++;
//             }
            
//         }
//     }
// };


//APPROCH AND LOGIC-

//in place sorting done means there is no extra space or array used for performing the sorting
//Two pointer approch is followed and three pointers are used here
//index pointer->for array traversal , left pointer-> for storing 0's , and right pointer-> for storing 2's
//while loop is used with condition index<=right because it is expected that after right pointer 2's will be there
//the catch is this that we don't need to increase the index(index++) after right--