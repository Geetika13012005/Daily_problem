#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;;
    int current=0,max_capacity=0;
    for (int i=0;i<n;i++){
        cin>>a>>b;
        current=current-a+b;
        if(current>max_capacity){
            max_capacity=current;
        }
    }
cout<<max_capacity<<endl;
return 0;
}