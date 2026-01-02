#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 void moveZeroElement(vector<int>&nums){
    int nonzero =0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != 0){
            swap(nums[i],nums[nonzero]);
            nonzero++;
        }
    }
 }
 int main(){
    vector<int> nums ={0,1,4,2,0,5};
    moveZeroElement(nums);
    cout<<"after moving zero:";
    for(int num :nums){
        cout<<num<<","<<" ";

    }
    cout<<endl;
    return 0;
 }