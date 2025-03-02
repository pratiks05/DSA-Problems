//Approch 1:(map and sorting)-Ordered Map
//runtime 1-3 ms

//Headers
#include<iostream>
#include<vector>
#include<map>
using namespace std;

//Leet Code Solution-
class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            int m=nums1.size();
            int n=nums2.size();
            map<int,int>mp;
            vector<vector<int>>result;
            for(int i=0; i<m; i++)
            {
                int id=nums1[i][0];
                int value=nums1[i][1];
                mp[id]+=value;
            }
             for(int i=0; i<n; i++)
            {
                int id=nums2[i][0];
                int value=nums2[i][1];
                mp[id]+=value;
            }
            for(auto &it:mp)
            {
                int key=it.first;
                int value=it.second;
                result.push_back({key,value});
            }
            return result;
        }
    };


//Approch 2:Two pointers
//runtime 0 ms, Time Complexity O(m+n)-

//Headers-
#include<iostream>
#include<vector>
using namespace std;

//Leet Code Solution-
class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
           int m=nums1.size();
           int n=nums2.size();
           int i=0;
           int j=0;
           vector<vector<int>>result;
           while(i<m && j<n)
           {
            if(nums1[i][0]<nums2[j][0])
            {
                result.push_back(nums1[i]);
                i++;
            }
            else if(nums2[j][0]<nums1[i][0])
            {
                result.push_back(nums2[j]);
                j++;
            }
            else{
                result.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]});
                i++;
                j++;
            }
           }
           while(i<m)
           {
            result.push_back(nums1[i]);
            i++;
           }
           while(j<n)
           {
            result.push_back(nums2[j]);
            j++;
           }
           return result;
        }
    };

