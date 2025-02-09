//Leet Code Solution-


//Approch-
//we have taken an empty string 'ans' & if at any point-
// if the current element of string is equal to the right most element of ans string then you will have to remove it from ans!
//In else case you will push the current element into the string.
//Also make sure to add a mandatory condition like the string ans should not be empty!



//Leet Code Solution-

// class Solution {
//     public:
//         string removeDuplicates(string s) {
//             string ans="";
//             int index=0;
//             while(index<s.length())
//             {
//                 if(ans.length()>0 && ans[ans.length()-1]==s[index])
//                 {
//                     ans.pop_back();
//                 }
//                 else{
//                     ans.push_back(s[index]);
//                 }
//                 index++;
//             }
//             return ans;
    
//         }
//     };


//Detailed Code-

#include<iostream>
using namespace std;


string removeDuplicates(string s)
{
    string ans="";
    int index=0;
    while(index<s.length())
    {
        if(ans.length()>0 && ans[ans.length()-1] ==s[index])
        {
            ans.pop_back();
        }
        else{
            ans.push_back(s[index]);
        }
        index++;
    }
    return ans;
}


int main()
{
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    cout<<"String after removing adjacents: "<<removeDuplicates(s);
    return 0;
}