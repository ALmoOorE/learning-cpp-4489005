// Learning C++ 
// Challenge Solution 01_04
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

int main(){

int row;
int col;
char sym;

cout<<"How many rows do you want? ";
cin>>row;

cout<<"How many columns do you want? ";
cin>>col;

cout<<"What character do you want? ";
cin>>sym;

for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
        cout<<sym;
    }
    cout<<sym<<'\n';
}




   /* for(int i = 1;i<=3;i++){

        for(int j = 1;j <= 10;j++){
        cout<<j<<" ";
    }
    cout<<'\n';
    }
    */
    



    return 0;
   
}
