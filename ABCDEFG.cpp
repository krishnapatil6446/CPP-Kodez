/*
ABC
DEF
GHI
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row = 1;
    char character = 'A';
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout<<character<<" ";
            character = character +1;
            col = col+1;
        }
        cout<<endl;
        row = row+1;
    }
}