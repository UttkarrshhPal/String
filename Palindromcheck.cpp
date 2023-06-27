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
 cin>>s1;
 string temp = s1;
 reverse(temp.begin(),temp.end());
 if(temp==s1)
 cout<<"Palindrom"<<endl;
 else
 cout<<"Not Palindrom"<<endl;

return 0;
}
