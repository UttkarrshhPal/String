/*** 
 
// Chal bhak bhen ke lodi
//ek sall me dhekta hu tuje
// Gand Faad mehnat karni hai

 ***/
#include<iostream>
#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <iterator>
#include <sstream>
#include <iomanip>
using namespace std;
int main(){
string s1;
string s2;
cin>>s1>>s2;
int i = 0;
int j = 0;
while(i<s1.size() && j<s2.size())
{
     if(s1[i]==s2[j]){
        i++;
        j++;
     }
     else{
        i++;
     }
}
if(j==s2.size())
cout<<"Subsequences"<<endl;
else
cout<<"Not Subsequence"<<endl;
// for(i=0;i<s1.size();i++)
// {
//     for(j=0;j<s2.size();j++)
//     {
//         if(s1[i]==s2[j]){
//             j++;
//         } 
//         else{
//             i++;
//         }
//     }
// }
// if(j==s2.size())
// cout<<"Subsequence";
// else
// cout<<"Not Subsequence";
return 0;
}