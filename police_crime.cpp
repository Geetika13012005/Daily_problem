#include<iostream>
using namespace std;
int main (){
    int n;  //crime 
    cin>>n;
    int events[n];

    for(int i=0;i<n;i++){
     cin>>events[i];

    }
    int officer =0,untreated=0;
    for(int i=0;i<n;i++){
        if(events[i]==-1){
            if(officer>0)
                officer--; //one sol the crime

            
            else
                untreated++;   //untreated
             }
        else{
                officer+=events[i];//hire new officer
            }

    }
    cout<<untreated<<endl;
    return 0;

}