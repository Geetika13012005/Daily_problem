#include<iostream>
#include<string>
#include<set>

using namespace std;
int main (){
    string n;
    cin>>n;
    
    set<char>uniquechar;
    for(char c:n){
        uniquechar.insert(c);
    }

    
   
    if (uniquechar.size() %2==0)
{
    cout<<"CHAT WITH HER" <<endl;

}
  else 
   cout<<"IGNORE HIM! "<<endl;
   return 0;
}