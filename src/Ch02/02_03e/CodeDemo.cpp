// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>
#include<ctime>
using namespace std;


int main(){
    int num;
    int guess;
    int tries;
    srand(time(NULL));

    num = rand() % 5 +1;
    cout<<"***************NUMBER GUESS GAME**************************\n";

    do{
        cout<<"Enter a guess between 1 - 5\n";
        cin>>guess;
        tries++;

        if(guess > num){
            cout<<"To high!\n";
        }else if(guess<num){
            cout<<"To low";
        }else{
            cout<<"CORRECT! # of tries was: "<<tries<<endl;
        }

    }while(guess != num);

    cout<<"*******************************************************************";



    return (0);
}
