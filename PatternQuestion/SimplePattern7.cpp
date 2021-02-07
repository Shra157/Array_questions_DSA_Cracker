/*1 2 3 4 5
  1 2 3 4 
  1 2 3
  1 2
  1 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of element:";
    cin>>n;
    int i,j,count;
    for(i=0;i<n;i++){
        count=0;
        for(j=n;j>i;j--){
            count+=1;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}