#include<iostream>
#include<string>
using namespace std;
int main (){
    int n;
    cin>>n;
    int totalcount=0;

    string s;
    while(n--){
     cin>>s;
     if(s=="Tetrahedron"){
        totalcount+=4;
     }
     else if(s=="Cube"){
        totalcount+=6;
     }
     else if(s=="Octahedron"){
        totalcount+=8;
     }
     else if(s=="Dodecahedron"){
        totalcount+=12;

     }
     else if(s=="Icosahedron"){
        totalcount+=20;
     }
    }
    cout<<totalcount<<endl;
    return 0;
    
    
}