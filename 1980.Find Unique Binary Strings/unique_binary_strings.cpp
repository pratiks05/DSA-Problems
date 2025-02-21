//Approch- Cantor's Diagonalization.
//Time complexity- O(n)
//Space Complexity- O(1)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        string findDifferentBinaryString(vector<string>& nums) {
            int n=nums.size();
            string ans;
            for(int i=0; i<n; i++)
            {
                char ch=nums[i][i]; // Taking the i-th character from the i-th string
                ans+=(ch=='0')?"1":"0"; //If the character is '0', it appends '1' to ans, and vice versa.
            }
            return ans;
        }
    };




//Why Cantor’s Diagonalization?

//The diagonalization technique ensures that the generated
//binary string differs from each input string at one position (the diagonal).

//Since there are 2^n possible binary strings of length 𝑛 but only n strings given, there must be at least one missing binary string.

