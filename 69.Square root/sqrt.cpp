//Approch- using Binary Search algorithm simply we are minimising the search space and then asking the predicate function every time after storing the answer to move right or left

//Leet Code Solution-

// class Solution {
// public:
//     int mySqrt(int x) {
//         int s=0;
//         int e=x;
//         long long int mid=s+(e-s)/2;
//         int ans=-1;
//         while(s<=e)
//         {
//             if((mid*mid)==x)
//             {
//                 return mid;
//             }
//             else if(mid*mid<x)
//             {
//                 ans=mid;
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
//             mid=s+(e-s)/2;

//         }
//         return ans;
//     }
// };

//Detailed Code-
#include<iostream>
using namespace std;
int sqrt(int n)
{
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid<n)
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number to find the square root of it: ";
    cin>>n;
    cout<<"The square root of "<<n<<" is: "<<sqrt(n);
    return 0;
}