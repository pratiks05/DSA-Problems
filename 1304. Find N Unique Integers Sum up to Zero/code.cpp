//approach-
//if n=even, then iterate over n/2 elements and push positive and negative ones
//in a defined array let say temp they will cancel each other and sum up to be 0

//if n=odd, then also do the same but the end also push 0


//Leet Code Solution-
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>res;
        for(int i=1; i<=n/2; i++)
        {
            res.push_back(i);
            res.push_back(-i);
        }
        if(n%2==1)
        {
            res.push_back(0);
        }
        return res;
    }
};