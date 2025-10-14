#include<iostream>
#include<string>
using namespace std;
int main (){
    int n;           // NUMBER OF STONES 
    cin>>n;
    string s;        //color of stone as a string 
    cin>>s;
    int  removal =0;           //minimise the stone removal
    for(int i=0;i<n;i++){
        if(s[i]==s[i-1]){         //if curr stone is equal to prev then condition violated 
            removal ++;          //remove stone then
        }
    }
    cout<<removal<<endl;
    return 0;

}