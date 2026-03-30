#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n";
    cin>>n;
    //loop for rows 
    for(int i=0;i<n;i++){
        //increasing part 
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //decreasing part 
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;

    }
    return 0;
}