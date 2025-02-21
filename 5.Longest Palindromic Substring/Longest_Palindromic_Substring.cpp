//Brute Force approch-
//Overall worst case Time Complexity- O(n^3)
//Using DP we can reduce the time complexity to O(n^2)

#include<iostream>
using namespace std;

class Solution {
    public:
        bool isPalindrome(string&s,int start,int end)
        {
            while(start<end)
            {
                if(s[start]!=s[end])
                {
                    return false;
                }
                start++,end--;
            }
            return true;
        }
        string longestPalindrome(string s) {
            string ans="";
            for(int i=0; i<s.size(); i++)
            {
                for(int j=i; j<s.size(); j++)//using the two loops we are getting the access of all possible combination of strings
                {
                    if(isPalindrome(s,i,j))//check first the string is palindrome or not
                    {
                        string t=s.substr(i,j-i+1);//now if the string is palindrome enter into this if condition and extract that substring
                        ans=t.size()>ans.size()?t:ans;//For finding longest palindromic substring
                    }
                }
            }
            return ans;
        }
    };