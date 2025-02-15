//What is anagram??
//a word or phrase formed by  rearranging the letters of a different word or phrase,
//typically using all the original letters exactly once.

//Example of Anagram- Gum,mug



//1.Brute Force Approch- Sorting-Time Complexity- O(nlogn)

//headers
#include<iostream>
#include<algorithm>
using namespace std;


//Leet Code solution-
class Solution {
    public:
        bool isAnagram(string s, string t) {
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            if(s==t)
            {
                return true;
            }
            else{
                return false;
            }
        }
    };

//2.Frequency Table/Hash Table Approch-Time Complexity-O(m+n)

#include<iostream>
using namespace std;


//Leet Code solution-
class Solution {
    public:
        bool isAnagram(string s,string t)
        {
            int freqTable[256]={0};//all 256 values initialised with 0
            for(int i=0; i<s.size(); i++)
            {
                freqTable[s[i]]++;  //ASCII value of s[i] jayega yaha par and uss index pe jaake value ko 0 se 1 kar dega 
            }
            for(int i=0; i<t.size(); i++)
            {
                freqTable[t[i]]--; //Same usi hash/frequency table me ab value minus hoga
            }
            for(int i=0; i<256; i++)
            {
                if(freqTable[i]!=0)
                {
                    return false;
                }
            }
            return true;
        }
};    
