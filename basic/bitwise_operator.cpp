// //Bitwise operator 
// and -> &
// or ->|
// not -> ~(invert karega 0-1,1-0)
// xor -> ^


#include<iostream>
using namespace std;
int main ()
{
    int a=3, b=5;{
        cout<<"a&b  - "<< (a&b) <<endl; //and 
          cout<<"a|b - "<< (a|b) <<endl;  //or 
            cout<<"~a - "<< (~a) <<endl; //not
              cout<<"a^b - "<< (a^b) <<endl; //xor
              
    }
    return 0;
}


// //pre and post increment 
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     int i=8;
//     cout<<(++i)<<endl; //i=9
//     cout<<(i++)<<endl;// i=9,then 10...pehle print karega then increment karega 
//  cout<<(i--)<<endl;//i= 10,then 9
//  cout<<(--i)<<endl;//i= 8
//     return 0;
//  }

// // normal sum of n numbers 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;

//     int sum =0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
// cout<<sum<<endl;
// }

// //Fibonacci series

// #include<iostream>
// using namespace std;
// int main(){
//     int n= 20;
//     int a=0;
//     int b=1;
//     for (int i=1;i<=n;i++){
//         int Nextnumber =a+b;

//         cout<<Nextnumber<<" ";

//         a=b;
//         b=Nextnumber;
//     }

    
//     return 0;
// }


// //break statement in loop 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i;
//     for (int i =1;i<=5;i++){
//         if(i ==3){
//         break;  //exit loop when i==3
// //break use case is used in searching an element and then end the loop 

//     }
//     cout<<i<<" ";
//     }
//      return 0;
// }

// // runn infinity loop
// #include<iostream>
// using namespace std;
// int main()
// {

//     for(int i=0;i<=5;i--){
//         cout<<i<<" ";
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int number,sum=0,product=1,digit;

//     cout<<"Enter a integer : ";
//     cin>>number;
//   if (number == 0) {  //  If number is 0
//         cout << "Result: 0" << endl;
//         return 0;
//     }

//     if (number < 0) {  // Convert negative number to positive
//         number = -number;
//     }

// while (number>0)
//  {
//     digit= number%10; 
//     sum+= digit;
//     product*=digit;
//     number/=10;
//  }
//  cout<<"result: "<<product- sum<<endl;


// }

//integer range is -2^31 to 2^31 -1

