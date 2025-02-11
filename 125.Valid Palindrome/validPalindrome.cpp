
//1.Leet Code Solution-

// class Solution {
//     public:
    
//     void toLower(string &s)
//     {
//         for(char &ch : s)
//         {
//             ch=tolower(ch);
//         }
//     }
    
//      void removeNonAlphanumeric(string &s) {
//             string result;
//             for (char ch : s) {
//                 if (isalnum(ch)) {
//                     result += ch;
//                 }
//             }
//             s = result;
//         }
//         bool isPalindrome(string s) {
//             toLower(s);
//             removeNonAlphanumeric(s);
//             int i=0,j=s.length()-1;
//             while(i<=j)
//             {
//                 if(s[i]==s[j])
//                 {
//                     i++;
//                     j--;
//                 }
//                 else{
//                     return false;
//                 }
//             }
//             return true;
            
            
//         }
//     };


//Detailed Solution-
#include<iostream>
using namespace std;


void toLower(string &s)
{
        for(char &ch : s)
        {
            ch=tolower(ch);
        }
}

void removeNonAlphanumeric(string &s)
{
        string result="";
        for (char ch : s)
        {
            if (isalnum(ch)) {
                 result += ch;
            }
        }
        s = result;
}

bool isPalindrome(string s)
{
        int i=0,j=s.length()-1;
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
}



int main()
{
    cout<<"\nEnter the string:";
    string s;
    getline(cin,s);
    toLower(s);
    cout<<"\nConverting the given string into lower case: "<<s<<endl;
    removeNonAlphanumeric(s);
    cout<<"\nRemoving all alphanumeric chacrecters "<<s<<endl;
    cout<<"\nValid Palindrome?:";

    if(isPalindrome(s))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

