//1.approch/method-


// Brute Force approch simply by use of loops we are calculating the
// sum of left elements and then sum of right elements of a particular element
// or index and then checking that they are equal
// or not if yes then we are returning that particular index i!

//2.Leet Code Solution-

// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         for(int i=0; i<nums.size(); i++)
//         {
//             int lsum=0;
//             int rsum=0;
//             for(int j=0; j<i; j++)
//             {
//                 lsum+=nums[j];
//             }
//             for(int j=i+1; j<nums.size(); j++)
//             {
//                 rsum+=nums[j];
//             }

//             if(lsum==rsum)return i;
//         }
//         return -1;
//     }
// };


//3.Detailed Code -

#include<iostream>
using namespace std;
int pivotIndex(int arr[],int n) {
        for(int i=0; i<n; i++)
        {
            int lsum=0;
            int rsum=0;
            for(int j=0; j<i; j++)
            {
                lsum+=arr[j];
            }
            for(int j=i+1; j<n; j++)
            {
                rsum+=arr[j];
            }

            if(lsum==rsum)
            {
                return i;
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
    cout<<"The given array is:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The pivot index is:"<< pivotIndex(arr,n);
   

    return 0;
}