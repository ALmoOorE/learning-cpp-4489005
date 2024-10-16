#include<iostream>

using namespace std;

int main(){

double num1;
double num2;
char oper;


cout<<"enter in the first number: "<<endl;
cin>>num1;
cout<<"enter in the second number: "<<endl;
cin>>num2;

cout<<"what operation would you like to do(+, -, *, / )"<<endl;
cin>>oper;

switch(oper){
    case '+':
    cout<<num1 << " + "<< num2<<" = "<<num1 + num2;

    case '-':
    cout<<num1 << " - "<< num2<<" = "<<num1-num2;

    case '*':
    cout<<num1 << " - "<< num2<<" = "<<num1-num2;

    case '/':
    if(num2==0){
        cout<<"You can't divide by 0.";
    }else{
        cout<<num1 << " / "<< num2<<" = "<<num1/num2;
    }
     default:
        cout<<"Choose a option.";
}

    return 0;
}
