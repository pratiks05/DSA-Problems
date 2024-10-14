//Basic Code or Concept:-

 #include<iostream>
using namespace std;
int reverseInt(int n)
{
   int rem=0,sum=0;
   while(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    return sum;
}
int main()
{
   cout<<"Enter the number to be reversed:";
   int n;
   cin>>n;
   cout<<"The reverse is:"<<endl<<reverseInt(n)<<endl;

}


//Solution of 2469.Reverse Integer:-

// class Solution {
// public:
  
//     int reverse(int x) {
//         int rem=0,sum=0;
//         bool isNeg=false;
//         if(x<=INT_MIN)
//         {
//             return 0;
//         }
//         if(x<0)
//         {
//             isNeg=true;
//             x=-x;
//         }
//         while(x>0)
//         {
//             if(sum>INT_MAX/10)
//             {
//                 return 0;
//             }
//             rem=x%10;
//             sum=sum*10+rem;
//             x=x/10;
//         }
//         return isNeg?-sum:sum;
//     }
    
// };