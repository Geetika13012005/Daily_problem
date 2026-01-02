#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
    string m,n;
    cin>>m;
    cin>>n;

    transform(m.begin(),m.end(),m.begin(),::tolower);
    transform(n.begin(),n.end(),n.begin(),::tolower);
    if(m<n){
        cout<<"-1"<<endl;

    }
    else if(m>n){
        cout<<"1"<<endl;

    }
    else if(m==n){
        cout<<"0"<<endl;
    }
    return 0;
}