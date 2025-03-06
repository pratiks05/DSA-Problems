//Headers
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//1. Leet Code Solution-(Approch-Sieve of Eratasthones(For Avoiding TLE))
//Time Complexity- O(n log log n) 
class Solution {
    public:
       
        int countPrimes(int n) {
           if(n==0) return 0;
           vector<bool> prime(n,true);
           prime[0]=prime[1]=false;
           int ans=0;
           for(int i=2; i<n; i++)
           {
            if(prime[i])
            {
                ans++;
                int j=2*i;
                while(j<n)
                {
                    prime[j]=false;
                    j+=i;
                }
            }
    
           }
           return ans;
        }
    };

//Complexity- O(nloglogn)


//2. Naive approch with sqrt function(TLE on Leet Code)-
/*
class Solution {
    public:

        bool isPrime(int n)
        {
            if(n<=1) return false;
            for(int i=2; i<=sqrt(n); i++)
            {
                if(n%i==0)
                {
                    return false;
                }
            }
            return true;
        }
       
        int countPrimes(int n) {
        int count=0;
           for(int i=0; i<n; i++)
           {
                if(isPrime(i))
                {
                    count++;
                }
           }
           return count;
        }
    };
*/