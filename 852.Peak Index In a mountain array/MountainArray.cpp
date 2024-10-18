//1.Approch and Complexity of solution

//Time Complexity O(logn) solved using binary search algorithm and runtime=0 ms
//as the array was a kind of monotonous fuction(combination of increasing and decreasing) and we have to find(search) the peak element
//So binary search algo was used here.



//2.Detailed Code with notes-

#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int FindPeakIndex(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end) //as we have written end=mid so in such cases often start and end become equal and it results infinite loop which may give TLE in Leet code. So s<e condition is only there.
    {
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else{
            end=mid; //as in opposite case like arr[mid]>arr[mid+1] there are two possibilities either the element is on other line or side of mountain or it is on peak. So in both the cases we need to go back. So considering that peak should not loose we have moved end to mid. So that both conditions got satisfied.
        }
        mid=start+(end-start)/2; //don't forget to update mid in binary search algorithm.
    }
    return start; //you can either return start,end or mid becuase at the end three of them will be pointing on a single eelement and no doubt that will be the peak element so rto return its index you can return either of start end or mid.
}
int main()
{
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the mountain array(increasing the decrease):"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"The index of peak element of the mountain array is:"<<FindPeakIndex(arr,n);
    return 0;
}


//2.Leet Code Solution

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//        int n=arr.size();
//        int s=0;
//        int e=n-1;
//        int mid=s+(e-s)/2;
//        while(s<e)
//        {
//         if(arr[mid]<arr[mid+1])
//         {
//             s=mid+1;
//         }
//         else
//         {
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//        }
//        return s;
//     }
// };