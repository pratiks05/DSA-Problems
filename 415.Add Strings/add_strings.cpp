#include<iostream>
#include<algorithm>
using namespace std;


//Leet Code Solution using recursion
class Solution {
public:

    string addRE(string num1,int p1,int p2,string num2,int carry=0)
    {
        //base case
        if(p1<0 && p2<0)
        {
            if(carry != 0)
            {
                return string(1,carry+'0');
            }
            return "";
        }
        //one case solved
        int n1=(p1>=0?num1[p1]:'0')-'0';
        int n2=(p2>=0?num2[p2]:'0')-'0';
        int csum=n1+n2+carry;
        int digit=csum%10;
        carry=csum/10;
        string ans="";
        ans.push_back(digit+'0');

        //recursion-
        ans+=addRE(num1,p1-1,p2-1,num2,carry);
        return ans;
    }
    string addStrings(string num1, string num2) {
        string ans=addRE(num1,num1.size()-1,num2.size()-1,num2);
        reverse(ans.begin(),ans.end());
        return ans;
       

    }
};