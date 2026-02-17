#include<bits/stdc++.h>
using namespace std;
int main (){
    string arr;
    cin>>arr;
    string target;
    cin>>target;

    sort(arr.begin(),arr.end());
    if(arr==target){
        cout<<"True";

    }
    else{
        cout<<"False";
    }
    return 0;


}