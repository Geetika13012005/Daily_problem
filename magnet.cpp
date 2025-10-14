#include<iostream>
#include<string>

using namespace std;
int main (){
    int n;
    cin>>n;
    string magnet,prev;
    int group = 1;

    cin>>prev;
    for(int i=1;i<n;i++){
        cin>>magnet;
        if (prev!= magnet){
            group++;

        }
        prev = magnet;
    }
    cout<<group<<endl;
    return 0;
}