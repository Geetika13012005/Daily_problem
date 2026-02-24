// //Q-1 ->pritn 1 to 10 using for loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=10;i>=1;i--)
// {

// cout <<i<<" "<<endl;
// }
// }

// //Q-2 ->print 10 to 1 using while loop

// #include<iostream>
// using namespace std;
// int main()
// {
//    int  i = 10;//start from 10
//     while(i>=1)  
//     {
//      cout<<i<<" "<<endl; //print number
//      i--;
//     }
//     return 0;
// }

// //Q-3 ->print "hello world " 5 times using do -while loop

// #include<iostream>
// using namespace std;
// int main()
// { int i=1;
//     do {
//         cout<<"Hello Delhi"<<endl;
//         i++;
//     }
//     while (i<=5); //condition

//     return 0;
// }

// //Q-4 -> Find the sum of the first N natural numbers using a for loop.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=10;
//     int sum = 0;

//     for (int i=1;i<=n;i++){
//         sum +=i;
//     }
//     cout<<"sum of first "<<n<<"natural number is:"<< sum<<endl;

//     return 0;
// }

//Q-5 -> Find the factorial of a number using a while loop.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num = 5;
//     long long factorial =1; //store result
//     int i= num;
//     while(i>1){
//         factorial *= i; //multifly factorial by i
//         i--; 
//     }
//     cout<<" the factorial " << num << " is: " << factorial <<endl;
//     return 0;
// }

// // Q-6  ->print right angle triangle using nested loop .
// //nested loop basically have 2 for loop 1- inner ,2-outer loop.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int rows =5;
//     for(int i=1;i<=rows;i++){ //inner loop...control no. of rows
//         for(int j=1;j<=i;j++){//outer loop...*increase in each row
//             cout<<"*";
//         }
//         cout<<endl; //move to next row 

//     }
//     return 0;
// }

// //Q-7 ->Print a reverse right-angled triangle using a nested loop.
// //nested loop are used when u have structure depending upon both rows and column
// #include<iostream>
// using namespace std;
// int main()
// {
//     int rows=5; // no. of rows
//     for (int i =rows;i>=1;i--){ //iterating through rows
//         for(int j=1;j<=i;j++){ // how many star printed on each row
//             cout<<" *";
//         }
//         cout<<endl;
//     }
//     return 0;
//}

// // Q-8-> Print a pyramid pattern using a nested loop.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int rows = 5;
//     for(int i=1;i<=rows;i++){
//         for (int j=1;j<=(rows-i);j++){
//             cout<<" ";
//         }
//         //print stars in each row
//         for (int j=1;j<=(2*i-1);j++){
//         cout<<"*";
//     }
//     cout<<endl;
//     }
//     return 0;
// }

// //Q-9 ->Print a diamond pattern using loops.

#include<iostream>
using namespace std;
int main()
{
    int rows=5;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=(rows - i);j++){
            cout<<" ";//print space
        }
         //print stars in each row
     for (int j=1;j<=(2*i-1);j++){
         cout<<"*";//print stars
     }
        cout<<endl;
    }
    //lower half of the pyramid
    for (int i=rows -1;i>=1;i--)
    {
        for (int j=1;j<=(rows - i); j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2* i-1);j++)
         {
            cout<<"*";
         }
        cout<<endl;
    }
    return 0;
}

//Q-10 