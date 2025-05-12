#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;


//Approch 1: Using Unordered Haha Maps-
class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int n=grid.size();
            int N=n*n;
            unordered_map<int,int>mp;
            int a=-1;
            int b=-1;
    
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    mp[grid[i][j]]++;
                }
            }
    
            for(int num=1; num<=N; num++)
            {
                if(!mp.count(num))
                {
                    b=num;
                }else if(mp[num]==2)
                {
                    a=num;
                }
                if(a!=-1 && b!=-1)
                {
                    break;
                }
            }
            return {a,b};
        }
    };

//Approch 2: Using Maths-
//Complexity- O(n^2)
class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
          int n=grid.size();
          long long N=n*n;
          long long gridsum=0;
          long long gridSqSum=0;
          for(int i=0; i<n; i++)
          {
            for(int j=0; j<n; j++)
            {
                gridsum+=grid[i][j];
                gridSqSum+=grid[i][j]*grid[i][j];
            }
          }
          long long sum=(N*(N+1))/2;
          long long sqSum=(N*(N+1)*(2*N+1))/6;
          int sqDiff=gridSqSum-sqSum;
          int sumDiff=gridsum-sum;

          int a=(sqDiff/sumDiff+sumDiff)/2;
          int b=(sqDiff/sumDiff-sumDiff)/2;
          return {a,b};
        }
    };