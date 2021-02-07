/* *****
   ****
   ***
   **
   *
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the No.:";
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=n;j>i;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;

    }
    return 0;
}