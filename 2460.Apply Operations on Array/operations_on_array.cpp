//Headers
#include<iostream>
#include<vector>
using namespace std;

//Leet Code Solution-
class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
          //part1- operations performed
          int n=nums.size();
          for(int i=0; i<n-1; i++)
          {
            if(nums[i]==nums[i+1])
            {
                nums[i]*=2;
                nums[i+1]=0;
            }
          }
          //part1 ends
          //part2 all zeros on right
          int j=0;
          for(int i=0; i<n; i++)
          {
            if(nums[i]!=0)
            {
                nums[j]=nums[i];
                j++; //non zero mila tab j ko aage kiye
            }
          }
          while(j<n)
          {
            nums[j]=0;
            j++;
          }
          //part 2 ends
          return nums;
        }
    };