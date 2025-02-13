//Leet Code Solution-

#include<iostream>
using namespace std;

//Solution starts from here-

class Solution {
    public:
        string decodeMessage(string key, string message) {
            //create mapping-
            char start='a';
            char mapping[300]={0};
            for(auto ch:key) //for-each loop
            {
                if(mapping[ch]==0 && ch!=' ')
                {
                    mapping[ch]=start;
                    start++;
                }
            }
            //use mapping
            string ans;
            for(auto ch:message)
            {
                if(ch==' ')
                {
                    ans.push_back(' ');
                }
                else{
                    char decodechar=mapping[ch];
                    ans.push_back(decodechar);
                }
            }
            return ans;
            
        }
    };
    
//Solution ends here

    //Note -
    //You can use for loop also here-
    /*for(int i=0; i<=key.length(); i++)
    {
        if(mapping[key[i]]==0 && key[i]!=' ')
        {
            mapping[key[i]]=start;
            start++;
        }
    }*/