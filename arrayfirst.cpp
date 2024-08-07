#include<iostream>
using namespace std;
void printArray(int arr[], int size ){
     cout << "printing the array "<<endl;
     for(int i=0; i<size; i++){
        cout << "Array is " << arr[i];
     }
}

int main (){
    int arr[] = {1,2,3,4,5};
    cout << arr[3];

    int sizeofarray = sizeof(arr)/sizeof(int);
    cout <<endl << sizeofarray<< endl;
}