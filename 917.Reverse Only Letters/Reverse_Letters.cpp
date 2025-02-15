//Approch- Two pointers with some rules
//For checking alphabet or not we can use isalpha() function.

//headers-
#include<iostream>
using namespace std;

//Leet code solution-
class Solution {
    public:
        string reverseOnlyLetters(string s) {
            int l=0;
            int h=s.size()-1;
            while(l<=h)
            {
                if(isalpha(s[l]) && isalpha(s[h])) //if both starting and ending charecters are alphabets then only swap and move i to next and take back j
                {
                    swap(s[l],s[h]);
                    l++;
                    h--;
                }
                else if(!isalpha(s[l]))
                {
                    l++;
                }
                else
                {
                    h--;
                }
            }
            return s;
    
        }
    };