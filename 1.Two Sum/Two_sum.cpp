//Leet Code solution

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//      vector <int> indexs;
//      int i=0; 
//      int j=nums.size()-1;
//      while(i<j && j>=0)
//      {
//         if(nums[i]+nums[j]==target)
//         {
//             indexs.push_back(i);
//             indexs.push_back(j);
//             return indexs;
//             break;
//         }
//         else{
//             i++;
//         }
//         if(i==j)
//         {
//             i=0;
//             j--;
//         }
//      }
//      return indexs;
//     }
// };