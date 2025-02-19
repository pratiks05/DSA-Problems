//Headers
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string.h>
using namespace std;


//Leet Code Solution-
class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            map<string,vector<string>>mp; //first(key) will be string and second(value) will be vector of string
            for(auto str:strs)
            {
                string s=str;
                sort(s.begin(),s.end());
                mp[s].push_back(str);
            }
    
            vector<vector<string>>ans;
            for(auto it=mp.begin(); it!=mp.end(); it++)
            {
                ans.push_back(it->second);
            }
            return ans;
        }
    };