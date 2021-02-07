/* 1
   0 1
   1 0 1
   0 1 0 1
   1 0 1 0 1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no.:";
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            if((i+j)%2==1){
                cout<<"0"<<" ";
            }
            else{
                cout<<"1"<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}