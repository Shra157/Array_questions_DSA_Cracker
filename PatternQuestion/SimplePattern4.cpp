/*      *
       **
      ***
     ****
    *****
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no:";
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}