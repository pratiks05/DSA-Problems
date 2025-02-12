//647.Leet Code(Medium Level)

//Approch-
//Basically a Two pointer approach but in a different way(expanding windows)<- ->
//we will separately calculate odd and even length palindromic substrings
//For odd one we can have only one element also as a palindrome(length=1),so i and j both pointers will be on the same charecter
//For even one we must have a string of length 2 as minimal string so i and just after that j will be there



//Leet Code Solution-
#include<iostream>
using namespace std;

class Solution {
    public:
        int expand(string s,int i,int j)
        {
            int count=0;
            while(i>=0 && j<s.length() && s[i]==s[j])
            {
                count++; //increase count as we got a match
                i--; //go left
                j++; //go right
            }
            return count;
        }
        int countSubstrings(string s) {
            int totalCount=0;
            for(int center=0; center<s.length(); center++)
            {
                int oddAns=expand(s,center,center); //for odd one length=1 string possible
                int evenAns=expand(s,center,center+1); //for even one minimal is len=2 string
                totalCount=totalCount+oddAns+evenAns;
            }
            return totalCount;
        }
    };

