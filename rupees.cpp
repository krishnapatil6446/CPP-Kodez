#include<iostream>
using namespace std;
int main(){
    int rupee = 1330;
    int notes;
    while(notes <= rupee){
    switch(notes){
        case 100:{
            cout << "Number of 100 rupee notes: " << rupee/100 << endl;
            break;
        }
        case 50:{
            cout << "Number of 50 rupee notes: " << rupee/50 << endl;
            break;
        }
        case 10:{
            cout << "Number of 10 rupee notes: " << rupee/10 << endl;
            break;
        }
        case 1:{
            cout << "Number of 1 rupee notes: " << rupee/1 << endl;
            break;
        }
        default: cout<<"invalid";
    }
    exit(0);
    }
}