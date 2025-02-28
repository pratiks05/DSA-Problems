//Headers 
#include<iostream>
#include<vector>
using namespace std;

//Leet Code Solution-

class Solution {
    public:
        string convert(string s, int numRows) {
            if(numRows==1) return s;
            
            vector<string>zigzag(numRows);
            int i=0,row=0;
            bool direction=1;//Top to Bottom
            while(true)//Infinite loop
            {
                if(direction)//direction==1
                {
                    while(row<numRows && i<s.size())
                    {
                        zigzag[row].push_back(s[i]);
                        row++;
                        i++;
                    }
                    row=numRows-2;
                }
                else{
                    while(row>=0 && i<s.size())
                    {
                        zigzag[row].push_back(s[i]);
                        row--;
                        i++;
                    }
                    row=1;
                }
                if(i>=s.size())break;
                direction=!direction;
            }
            string ans="";//empty ans string
            for(int i=0; i<zigzag.size(); i++)
            {
                ans+=zigzag[i];
            }
            return ans;
        }
    };