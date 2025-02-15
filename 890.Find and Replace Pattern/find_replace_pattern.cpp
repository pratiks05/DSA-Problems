//Approch- Mapping(substitution table) Similar to Leet Code-2325



//Headers-
#include<iostream>
#include<vector>
using namespace std;

//Leet Code Solution-
class Solution {
    public:
    
        //this function normalises all the words and pattern in a similar format(mapping done)
        //so that we can compare them with the solution
        void createMapping(string &str)
        {
            char start='a';
            char mapping[300]={0};
            for(auto ch:str) //for each loop to traverse the charecters of the string
            {
                if(mapping[ch]==0)
                {
                    mapping[ch]=start;
                    start++;
                }
            }
            //update the string
            for(int i=0; i<str.length(); i++)
            {
                char ch=str[i];
                str[i]=mapping[ch];
            }
        }
    
        vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
            vector<string> ans; //vector of string created to store ans

            createMapping(pattern); //normalise your pattern
            for(string s: words)//For traversing the vector of string
            {
                string tempString=s;
                createMapping(tempString);
                if(tempString==pattern)
                {
                    ans.push_back(s);
                }
            }
            return ans;
        }
    
    };