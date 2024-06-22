#include<iostream>
using namespace std;
int main (){
    int a,b;
    char ch;

    cout<<"Enter the value of a : "<<endl;
    cin>>a;

    cout<<"Enter the value of b : "<<endl;
    cin>>b;

    cout<<"Enter the operation : "<<endl;
    cin>>ch;

    switch(ch){

        case '+':
        cout<<"The sum of a and b is : "<<a+b<<endl;
        break;

        case '-':
        cout<<"The difference of a and b is : "<<a-b<<endl;
        break;

        case '*':
        cout<<"The multiplication of a and b is :"<<a*b<< endl;
        break;

        case '/':
        cout<<"The difference of a and b is : "<<a/b<<endl;
        break;

        default :
        cout<<"Invalid operation"<<endl;
        break;
    }
}