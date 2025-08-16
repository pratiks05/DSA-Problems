#include<iostream>
using namespace std;


//Leet Code Solution
class Solution {
public:
    string largestGoodInteger(string num) {
        string largest="";
        for(int i=1; i<num.length()-1; i++)
        {
            if(num[i]==num[i-1] && num[i]==num[i+1])
            {
                string curr(3,num[i]);
                if(curr>largest)
                {
                    largest=curr;
                }
            }
        }
        return largest;
    }
};

//Time Complexity- O(n)