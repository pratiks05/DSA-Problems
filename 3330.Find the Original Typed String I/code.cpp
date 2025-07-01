#include<iostream>
using namespace std;

//Leet Code Solution-
class Solution {
public:
    int possibleStringCount(string word) {
         int count=0;
        for(int i=1; i<word.length(); i++)
        {
           
            if(word[i]==word[i-1])
            {
                count++;
            }
        }
        return count+1;
    }
};

//Concept-
//we are comparing any letter of string with its previous and if it is same then their is possibility that
//Alice has long pressed the key so increase the count by 1
//At last when you are returing the result make sure you are returning by adding 1 as there is also a possibility 
//that she had not long pressed any key as it was clearly mentioned in problem that she will do this mistake atmost once.