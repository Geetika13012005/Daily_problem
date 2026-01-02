#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
    string s;
    getline(cin,s);
  string numbers="";     

  for(char c:s)
  {
    if(c != '+')
    {           
        numbers += c;
    }
  }
    sort(numbers.begin(),numbers.end());  

  for (int i=0;i<numbers.size();i++)
  {
   cout<<numbers[i];                        
   if(i!=numbers.size()-1)
   {
    cout<<'+';
   }
  }

cout<<endl;
    return 0;
}