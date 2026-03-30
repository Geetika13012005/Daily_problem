#include<iostream>
using namespace std ;
int main (){
    //input taking
    int n; 
    cout<<"enter value of n";
    cin>>n;
    // row loop 
    for(int i=0;i<=n;i++){
        //increaseing part 
        for(int j=0;j<i;j++){
            cout<<j+i<<" ";
        }

        //decreaseing part 
        for(int j=i-2;j>=0;j--){
            cout<<i+j<<" ";

        }
        //move to next line after each row 
        cout<<endl;
    }
    return 0;

}