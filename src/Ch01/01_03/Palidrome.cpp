// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <algorithm>
#include<cctype>
using namespace std;

int main(){
    string str;
    string rev_str;

    cout<<"What the word? ";
    getline(cin, str);
    transform(str.begin(),str.end(),str.begin(),::tolower);
    rev_str = str;
    reverse(rev_str.begin(), rev_str.end());

   if (str == rev_str){
    cout<<str<< " is a palindrome.";
   }else{
    cout<<str<< " is not a palidrome";
   }

    return (0);
}
