/*
  $ $ $ $
  $ $ $ $
  $ $ $ $
  $ $ $ $
*/




#include<iostream>
using namespace std;
int main(){
    int rows,coloumn;
    cout<<"Enter rows and coloumn";
    cin>>rows>>coloumn;
    for(int i=0;i<rows;i++){
        for( int j=0;j<coloumn;j++){
            cout<<"$"<<" ";
        }
        cout<<endl;
    }
    return 0;
}