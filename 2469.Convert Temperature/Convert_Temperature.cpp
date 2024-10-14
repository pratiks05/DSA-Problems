//Basic Code or Concept:-

#include<iostream>
using namespace std;
void convertTemp(int cel)
{
   float f=cel+273.15;
   float k=cel*1.80+32.00;
   cout<<"farenhite:"<<endl<<f<<endl;
   cout<<"Kelvin:"<<endl<<k<<endl;
 
}
int main()
{
    int cel;
    cout<<"enter temperature in Cel:";
    cin>>cel;
    convertTemp(cel);
  return 0;
}



//Solution of 2469.Convert The Temperature:-

// class Solution {
// public:
//     vector<double> convertTemperature(double celsius) {
//         double k=celsius+273.15;
//         double f=celsius*1.80+32.00;
//         vector<double>v;
//         v.push_back(k);
//         v.push_back(f);
//         return v;
//     }
// };


