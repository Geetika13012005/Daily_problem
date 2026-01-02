#include<iostream>
using namespace std;
int main(){
    int n,k,w,m,f,wPrice=0;
    cin>>k>>n>>w;
    for(int i=0;i<w;i++){
        f=k*(i+1);
        wPrice+=f;
    }

    m=(wPrice-n);
    if(m<0){
        m=0;
    }
    cout<<m;
    return 0;
}