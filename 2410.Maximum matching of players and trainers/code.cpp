//Headers
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//LeetCode solution-
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
       sort(players.begin(),players.end());
       sort(trainers.begin(),trainers.end());
       int count=0;
       int m=players.size();
       int n=trainers.size();
       int i=0;
       int j=0;
       while(i<m && j<n)
       {
        if(players[i]>trainers[j])
        {
            j++;
        }
        else{
            i++;
            j++;
            count++;
        }
       }
       return count;
    }
};