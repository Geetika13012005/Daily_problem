#include<iostream>
using namespace std;
int main (){
    int n,f;
    cin>>n>>f;
    int width=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a>f)
            width+=2;
            else
            width+=1;
            
        }
    cout<<width<<endl;
    return 0;
}