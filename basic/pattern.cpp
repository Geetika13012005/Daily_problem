// // #include<iostream>
// // using namespace std;
// // int main()
// // {

// // int rows= 5;
// // for(int i=rows;i>=1;i--)

// // {
// //     cout<<string(i, '*')<<endl;
// // }
// // }
// // // khud se likha hai ...maza aa gya bhai

// #include<iostream>
// using namespace std;
// int main() 
// {
//     int rows = 5;
//     for (int i=1;i<=rows;i++)
//   {
//     for (int j=1; j<=i;j++)
//     {

//     cout<<"*";
//     }
//     cout<<endl;
//     }
//    return 0;
//  }



#include<iostream>
using namespace std;
int main()
{
    int rows = 5;

    for (int i=1;i<=rows ;i++)
    {
        cout<<string (rows - i,' ');//print spaces
        cout<<string(2* i -1,'*') //print stars
        <<endl;
    }
    return 0;
}


//reverse right angle triangle
// #include<iostream>
// using namespace std;
// int main()
// {
//     int rows=5;
//     for(int i =rows; i>=1 ;i--) 
//     {
// cout<< string(i,'*') <<endl;
//     }
//     return 0;
// }