// LC-1910 Remove all Occurances of a substring

//concepts used-
//jab tak part(substring) mile tab tak usko remove karte raho from s(main string)
//s.find(part)==string::npos   npos k equal hona matlab no position found matlab exist nhi kar rha part
//s.erase()   isme do value jata hai first one is from where you will start and second till where you will remove elements


//detailed solution

#include<iostream>
using namespace std;

string removeOccurances(string s,string part)
{
    while(s.find(part)!=string::npos)
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main()
{
    string s,part;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    cout<<"Enter the substring:"<<endl;
    cin>>part;
    cout<<"After removing every occurances of substring the updated string is: "<<removeOccurances(s,part);
    return 0;
}





//Leet Code Solution-


class Solution {
    public:
        string removeOccurrences(string s, string part) {
            while(s.find(part)!=string::npos)
            {
                s.erase(s.find(part),part.length());
            }
            return s;
        }
    
    };
