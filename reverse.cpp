#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main (){
    string n;
    cout<<"enter a string : ";
    getline(cin,n);
    reverse(n.begin(),n.end());
    cout<<"Reverse string"<<n<<endl;
    return 0;
    

}