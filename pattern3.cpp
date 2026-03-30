#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter value of n: ";
    cin>>n;
    

    //loop for outer rows 
    for(int i=0;i<=n;i++){
        // loop for internal loop 
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;

    }
    return 0;

}