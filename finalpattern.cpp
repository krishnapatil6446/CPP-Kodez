/*
   1
  121
 12321
1234321
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        /*Print spaces (1st traingle)
            *
           **
          ***
        */

       int space = n-row;
       while(space){
        cout<<" ";
        space = space-1;
       }

        /*Print 2nd Traingle
            1
           12
          123
         1234
        */
        int i = 1;
        while(i<=row){
            cout<<i;
            i=i+1;
        }
        

        /*Print 3rd Traingle
            
            1
            21
            321
        */
       int j = i - 1;
       while(j){
        cout<<j;
        j = j+1; 
       }

       cout<<endl;
       row=row+1;


    }
}