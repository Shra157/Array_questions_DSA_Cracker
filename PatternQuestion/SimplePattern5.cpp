/* 1
   2 2
   3 3 3
   4 4 4 4
   5 5 5 5 5
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no:";
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}