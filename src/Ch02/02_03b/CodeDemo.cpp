// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>
#include<ctime>
using namespace std;

int main(){
   srand(time(NULL));
   int num1 = (rand() % 6) +1;
   int num2 = (rand() % 6) +1;
   int num3 = (rand() % 6) +1;
   cout<<num1<<'\n';
   cout<<num2<<'\n';
   cout<<num3<<'\n';
   cout<<endl;
    return (0);
}
