#include<iostream>
using namespace std;

int main(){
int input;
cout << "Enter size of array: "<< endl;
cin >> input;

int num[100];

cout<<"Enter array elements: "<< endl;
//taking input in arrays
for (int i=0;i<input;i++){
    cin>>num[i];
}

//adding array elements 
int sum=0;
for (int i ; i<input;i++){
    sum+=num[i];
}
cout << sum;

}