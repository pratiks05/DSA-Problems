//Approch-
//Two pointer Approch and manual function creation for checking vowel or not.

//Headers
#include<iostream>
using namespace std;

//Leet Code Solution-
class Solution {
    public:
        bool isVowel(char ch)
        {
          ch=tolower(ch); //jo bhi charecter aa rha h lower or uppercase convert it into lower by default and then compare
          return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'; //boolean value either 1 or 0 return hoga
    
        }

        string reverseVowels(string s) {
            int l=0;
            int h=s.size()-1;
            while(l<=h)
            {
                if(isVowel(s[l]) && isVowel(s[h]))//left and right dono end pe vowel hone se hi swap karna h warna nahi
                {
                    swap(s[l],s[h]);
                    l++;
                    h--;
                }
                else if(isVowel(s[l])==0) //in case left end pe non vowel charecter aa gaya toh left index ko increase karo l++ opposite case m h--
                {
                    l++;
                }
                else{
                    h--;
                }
            }
            return s; //at last we are returning the same string s because changes are inplace, we have not modified the string
        }
    };