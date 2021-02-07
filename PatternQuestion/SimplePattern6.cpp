/* 1
   2 3
   4 5 6
   7 8 9 10
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no.:";
    cin>>n;
    int i,j,count=0;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            count+=1;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}