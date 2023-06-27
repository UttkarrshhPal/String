// print freq of character in sorted order 
//in a string of lower case alphabet
#include<iostream>
#include<sstream>
using namespace std;
// string freq(string ip)
// {
//    // temp array
   
// }
int main()
{  // count freq of each char 
    string ip = "geeksforgeek";
    int count[26] = {0};
   for(int i = 0;i<ip.size();i++)
   {
      // pos kaise hogi array me
       count[ip[i]-'a']++;
       // like 0 pos --->a
       // 1st pos ------>b
   }
   for(int i =0;i<26;i++)
   {
    if(count[i]>0)
    {
        cout<<char(i+'a')<<" "<<count[i]<<endl;
    }
   }
}